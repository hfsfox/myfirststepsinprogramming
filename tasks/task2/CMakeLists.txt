cmake_minimum_required(VERSION 3.5)
project(variant VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(variant
    src/variant.cpp
    src/Task.cpp
    # headers
    src/Task.h
)

set_target_properties(variant PROPERTIES
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(variant PUBLIC
)
