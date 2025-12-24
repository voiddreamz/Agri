cmake_minimum_required(VERSION 4.0)
project(Agri)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SRCS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
foreach(src ${SRCS})
    get_filename_component(name ${src} NAME_WE)  # 去掉路径和后缀
    add_executable(${name} ${src})
endforeach()
