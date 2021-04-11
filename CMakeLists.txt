cmake_minimum_required(VERSION 3.8)
project(dxlib_test CXX)

# DXLIB_PATHを定義
set(DXLIB_PATH C:/DxLib/DxLib_GCC/include_GCC_MinGW/8_1_0_i686_w64_posix_dwarf_rt_v6_rev0)

# インクルードディレクトリ・リンカディレクトリを認識させる
include_directories(${DXLIB_PATH})
link_directories(${DXLIB_PATH})

# exeファイルを作成
add_executable(dxlib_test main.cpp)

add_subdirectory(src)

# c++17
target_compile_features(dxlib_test PUBLIC cxx_std_17)

# DxLib用コンパイルオプション
target_compile_options(dxlib_test PUBLIC -g -DDX_GCC_COMPILE)

# DxLib用リンクオプション
target_link_libraries(dxlib_test
    DxLib
    DxUseCLib
    DxDrawFunc
    jpeg
    png
    zlib
    tiff
    theora_static
    vorbis_static
    vorbisfile_static
    ogg_static
    bulletdynamics
    bulletcollision
    bulletmath
    opusfile
    opus
    silk_common
    celt
)

target_link_libraries(dxlib_test greeting)


