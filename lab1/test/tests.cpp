#include "../include/solution.hpp"
#include <gtest/gtest.h>

TEST(correctly_check, normal_data) {
  ASSERT_TRUE(lab1::Solution::isChocolateCorrect(1, 1) == true);
}

TEST(correctly_check, left_nool) {
  ASSERT_TRUE(lab1::Solution::isChocolateCorrect(0, 1) == false);
}

TEST(correctly_check, right_nool) {
  ASSERT_TRUE(lab1::Solution::isChocolateCorrect(1, 0) == false);
}

TEST(correctly_check, right_params_under_null) {
  ASSERT_TRUE(lab1::Solution::isChocolateCorrect(1, -1) == false);
}

TEST(correctly_check, left_params_under_null) {
  ASSERT_TRUE(lab1::Solution::isChocolateCorrect(-1, 1) == false);
}

TEST(chocolate_division_test, normal_data_test_1) {
  testing::internal::CaptureStdout();
  lab1::Solution::divideChocolate(2, 1);
  std::string out = testing::internal::GetCapturedStdout();
  EXPECT_EQ(out, "1\n");
}

TEST(chocolate_division_test, normal_data_test_2) {
  testing::internal::CaptureStdout();
  lab1::Solution::divideChocolate(3, 1);
  std::string out = testing::internal::GetCapturedStdout();
  EXPECT_EQ(out, "2\n");
}

TEST(chocolate_division_test, bad_data_test_1) {
  testing::internal::CaptureStdout();
  lab1::Solution::divideChocolate(3, -5);
  std::string out = testing::internal::GetCapturedStdout();
  EXPECT_EQ(out, "0\n");
}

TEST(chocolate_division_test, bad_data_test_2) {
  testing::internal::CaptureStdout();
  lab1::Solution::divideChocolate(-6, 0);
  std::string out = testing::internal::GetCapturedStdout();
  EXPECT_EQ(out, "0\n");
}