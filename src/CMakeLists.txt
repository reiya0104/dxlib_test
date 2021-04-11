add_library(
    greeting
    STATIC
    test.cpp
)

target_include_directories(greeting
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
