#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, LastArgumentNull) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "good"; test_val[2] = NULL;
    EXPECT_EQ("good", echo(3,test_val));
}

TEST(EchoTest, FirstArgumentNull) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = NULL; test_val[2] = "second";
    EXPECT_EQ("second", echo(3,test_val));
}

TEST(EchoTest, MiddleArgumentNull) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "first";  test_val[2] = NULL; test_val[3] = "third";
    EXPECT_EQ("first third", echo(4,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
