cmake_minimum_required(VERSION 3.12)

include_directories("./" "./tools/googletest/googletest/include")

add_subdirectory(tools/googletest)
add_executable(app src/main.cpp src/DemoClass.cpp)

add_executable(test tests/demo_test.cpp)
target_link_libraries(test gtest gtest_main)