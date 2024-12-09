#include "./dxlib_glue_code.h"
#include <DxLib.h>


int DxLibGlueCode::__DX_DrawString(int x,int y,const std::string& String,unsigned int color){
    return DrawString(x,y,String.c_str(),color);
}	
unsigned int DxLibGlueCode::__DX_GetColor(int r,int g,int b){
    return GetColor(r,g,b);
}

int DxLibGlueCode::__DX_DrawBox(int x1,int y1,int x2,int y2,unsigned int color,int FillFlag){
    return DrawBox(x1,y1,x2,y2,color,FillFlag);
}
	
int DxLibGlueCode::__DX_DrawGraph(int x,int y,int GraphHandle,int TransFlag){
    return DrawGraph(x,y,GraphHandle,TransFlag);
}
int DxLibGlueCode::__DX_LoadGraph(const std::string& FileName){
    return LoadGraph(FileName.c_str());
}
	
int DxLibGlueCode::__DX_DeleteGraph(int GraphHandle){
    return DeleteGraph(GraphHandle);
}

