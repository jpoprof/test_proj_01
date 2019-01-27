cmake_minimum_required(VERSION 3.12)

add_subdirectory(tools/googletest)
add_executable(app src/main.cpp src/DemoClass.cpp)

#gtest_discover_tests()