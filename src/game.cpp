#include "./game.h"
#include <DxLib.h>
#include "dxlib_glue_code.h"

sol::state Game::lua;
Game::Game(){
  if(initialize() == -1);
  lua["initialize"]();
}
Game::~Game(){
  if(finalize() == -1);
  lua["finalize"]();
}
void Game::draw()const{
  lua["draw"]();
}
void Game::update(){
  lua["update"]();
}
	
int Game::initialize(){
    lua.open_libraries(sol::lib::base,sol::lib::package,sol::lib::io);
    // DxLibのグルーコードをLuaに登録
    lua.new_usertype<DxLibGlueCode>("DxLib",
        sol::constructors<DxLibGlueCode()>(),  // コンストラクタ
        "draw_string", &DxLibGlueCode::__DX_DrawString,
        "get_color", &DxLibGlueCode::__DX_GetColor,
        "draw_box", &DxLibGlueCode::__DX_DrawBox,
        "draw_graph", &DxLibGlueCode::__DX_DrawGraph,
        "load_graph", &DxLibGlueCode::__DX_LoadGraph,
        "delete_graph", &DxLibGlueCode::__DX_DeleteGraph
    );
    try {
        // Luaファイルを読み込んで実行
        lua.script_file("script/main.lua");
    } catch (const sol::error& e) {
        printfDx("LuaError: %s",e.what());
    }
    ChangeWindowMode(true);
    SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);
    if (DxLib_Init() == -1)return -1;
    SetDrawScreen(DX_SCREEN_BACK);
    return 0;
}
int Game::finalize(){
    if(DxLib_End() == -1)return -1;
    return 0;
}

int Game::mainLoop(){
    while(ProcessMessage() == 0){
        ClearDrawScreen();
        update();
        draw();
        ScreenFlip();
    }
    return 0;
}

