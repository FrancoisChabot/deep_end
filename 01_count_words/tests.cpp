#include "gtest/gtest.h"
#include "count_words.h"

using exerc_01::count_words;

TEST(exerc_01, simple_cases) {
  EXPECT_EQ(1, count_words("allo"));
  EXPECT_EQ(2, count_words("allo bonjour"));
  EXPECT_EQ(3, count_words("a b c"));
}

TEST(exerc_01, empty_is_0) {
  EXPECT_EQ(0, count_words(""));
}

TEST(exerc_01, unexpected_spaces) {
  EXPECT_EQ(1, count_words("  a"));
  EXPECT_EQ(1, count_words("b  "));
  EXPECT_EQ(2, count_words("a  b"));
}

TEST(exerc_01, punctuation) {
  EXPECT_EQ(2, count_words("allo.salut"));
  EXPECT_EQ(2, count_words("allo. salut"));
  EXPECT_EQ(2, count_words("allo. .salut"));
}
