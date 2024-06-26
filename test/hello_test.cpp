#include <gtest/gtest.h>

#include <string>

#include "lib.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(LibTest, ReverseWorks) {
  std::string s{"Hello"};

  cpp_template::reverse(s);

  EXPECT_EQ(s, std::string{"olleH"});
}
