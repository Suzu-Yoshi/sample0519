/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
//DxLib動作確認用のプログラム


//▼▼▼▼▼ プログラム追加ここから ▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼

//########## ヘッダーファイル読み込み ##########
#include "DxLib.h"

#include "header.h"

//########## プログラムで最初に実行される関数 ##########
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);			//ウィンドウモードに設定
	SetGraphMode(GAME_WIDTH, GAME_HEIGHT, GAME_COLOR);	//指定の数値でウィンドウを表示する
	SetWindowStyleMode(GAME_WINDOW_BAR);		//タイトルバーはデフォルトにする
	SetMainWindowText(TEXT(GAME_WINDOW_NAME));	//ウィンドウのタイトルの文字
	SetAlwaysRunFlag(TRUE);						//非アクティブでも実行する

	if (DxLib_Init() == -1) { return -1; }	//ＤＸライブラリ初期化処理

	int DrawX = 0;	//表示位置X
	int DrawY = 0;	//表示位置Y

	DrawString(DrawX, DrawY, "Hello World", GetColor(255, 255, 255));	//文字を描画

	WaitKey();	//キーー入力待ち
	DxLib_End();	//ＤＸライブラリ使用の終了処理

	return 0;
}
//▲▲▲▲▲ プログラム追加ここまで ▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲
