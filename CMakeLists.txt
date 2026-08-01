cmake_minimum_required(VERSION 3.20)
project(dsa)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-O0 -Wall -Wextra -Werror -Pedantic)

include_directories(src)

add_executable(dapp
src/insertion_sort.cpp
)

