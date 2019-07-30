cmake_minimum_required(VERSION 3.14)
project(stepik C)

set(CMAKE_C_STANDARD 99)

add_executable(stepik  task_9_2_13.c)
find_library(M_LIB m)
target_link_libraries(stepik ${M_LIB})
