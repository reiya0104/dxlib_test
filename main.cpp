#include <DxLib.h>

#include "test.hpp"

// プログラムは WinMain から始まる
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    ChangeWindowMode(TRUE);  // 画面をウィンドウモードにする
    SetMainWindowText("DxLib Test");  // ウィンドウテキストを変更

    // ＤＸライブラリ初期化処理
    if (DxLib_Init() == -1) {
        return -1;  // エラーが起きたら直ちに終了
    }

    DrawBox(0, 0, 200, 100, (int)GetColor(255, 0, 0), TRUE);

    test();

    // Enterキーを押すまで待機
    while (ProcessMessage() == 0) {
        if (CheckHitKey(KEY_INPUT_RETURN) == 1) break;
    }

    DxLib_End();  // ＤＸライブラリ使用の終了処理

    return 0;  // ソフトの終了
}
