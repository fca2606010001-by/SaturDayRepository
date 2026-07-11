#pragma once

namespace GameConst
{
	//================================
	//window size
	//================================

	constexpr int SCREEN_WIDTH = 1280;
	constexpr int SCREEN_HEIGHT = 720;

	constexpr float CAMERA_SPEED = 5.0f;
	constexpr int  PLAYER_DRAW_X = 96;
	constexpr int PLAYER_DRAW_Y = 96;

	//================================
	// PlayerSettings
	//================================

	//一コマのサイズ
	constexpr int PLAYER_WIDTH = 210;
	constexpr int PLAYER_HEIGHT = 220;
	//分割数
	constexpr int PLAYER_COL = 7;
	constexpr int PLAYER_ROW = 4;

	//総フレーム数
	constexpr int PLAYER_TOTAL_FRAME = PLAYER_COL * PLAYER_ROW;

	//=============================
	//アニメーションの速度
	//=============================
	constexpr int IDLE_SPEED = 10;
	constexpr int WALK_SPEED = 5;
	constexpr int RUN_SPEED = 8;
	constexpr int JUMP_SPEED = 5;
}