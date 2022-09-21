#版本设置
cmake_minimum_required(VERSION 2.8)
#项目名
project(C_TEST)

#添加自制库
include_directories(include)
#添加可执行文件
add_executable(addpntrs addpntrs.cpp )
add_executable(arrayone arrayone.cpp )
add_executable(ptrstr ptrstr.cpp)