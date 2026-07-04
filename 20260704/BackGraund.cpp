#include "BackGraund.h"
#include "DxLib.h"

//======================================
//èâä˙âª
//======================================
void BackGraund::Init()
{
	imageHandle = LoadGraph("img/Background.png");
}

//======================================
// ï`âÊ
//======================================
void BackGraund::Draw(float cameraX)
{
	DrawGraph(-(int)(cameraX * 0.5f),0,imageHandle, TRUE);
}