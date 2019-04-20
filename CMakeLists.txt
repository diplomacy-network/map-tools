cmake_minimum_required(VERSION 3.13)
project(dnw_map_tools)

set(CMAKE_CXX_STANDARD 14)

file(GLOB dnw_map_tools_SRC
        "*.hpp"
        "*.h"
        "*.cpp"
        )

add_executable(dnw_map_tools ${dnw_map_tools_SRC})