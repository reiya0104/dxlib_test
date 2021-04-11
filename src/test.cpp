#include "test.hpp"

#include <DxLib.h>

#include <string>

void test() {
    int x, y;
    unsigned Cr = GetColor(255, 255, 255);
    GetDrawScreenSize(&x, &y);
    std::string draw_str = "Hello, World!";
    int str_width =
        GetDrawStringWidth(draw_str.c_str(), strlen(draw_str.c_str()));
    int str_size = GetFontSize();
    DrawString((x - str_width) / 2, (y - str_size) / 2, draw_str.c_str(), Cr);
}
