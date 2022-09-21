#版本设置
cmake_minimum_required(VERSION 2.8)
#项目名
project(C_TEST)

#添加自制库
include_directories(include)
#添加可执行文件
# add_executable(swapTest swapTest.cpp src/swap.cpp)
# add_executable(2.7_1 2.7_1.cpp )
# add_executable(2.7_2 2.7_2.cpp )
# add_executable(2.7_3 2.7_3.cpp src/2.7_3_func.cpp)
# add_executable(2.7_4 2.7_4.cpp )
# add_executable(3.7.1 3.7.1.cpp )
# add_executable(3.7.3 3.7.3.cpp )
# add_executable(3.7.4 3.7.4.cpp )
# add_executable(3.10 3.10.cpp )
# add_executable(4.13.1 4.13.1.cpp )
add_executable(formore formore.cpp)