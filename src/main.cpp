// 以下の行がないとコンパイルが通りません
#pragma comment(linker, "/subsystem:windows")
#include "./game.h"
#include <Windows.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow){
  try{
    Game game;
    game.mainLoop();
  }catch(const std::runtime_error& e){
  }
  return 0;
}
