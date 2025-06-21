cmake_minimum_required(VERSION 3.24.0)

project(gcovr_example LANGUAGES C)

add_executable(example src/main.c)

target_compile_options(example PRIVATE -ffile-prefix-map=${CMAKE_SOURCE_DIR}=. -coverage)
target_link_options(example PRIVATE -coverage)
