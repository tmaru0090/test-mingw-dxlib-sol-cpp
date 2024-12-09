#pragma once
#include <string>

class DxLibGlueCode final{
public:
	int __DX_DrawString(int x,int y,const std::string& string,unsigned int color);

	int __DX_DrawBox(int x1,int y1,int x2,int y2,unsigned int color,int FillFlag);
	int __DX_DrawGraph(int x,int y,int GraphHandle,int TransFlag);
	int __DX_LoadGraph(const std::string& FileName);
	int __DX_DeleteGraph(int GraphHandle);
	unsigned int __DX_GetColor(int r,int g,int b);
};
