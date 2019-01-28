#include "src/DemoClass.cpp"
#include "gtest/gtest.h"


TEST(demoTest, passingTest) {
    DemoClass::DemoClass dut = DemoClass::DemoClass();
    int a = dut.demoFunction(1);
    EXPECT_EQ(a, 4);
}

TEST(demoTest, failingTest) {
    DemoClass::DemoClass dut = DemoClass::DemoClass();
    int a = dut.demoFunction(1);
    EXPECT_EQ(a, 5);
}