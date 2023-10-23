#include "hw05.h"
#include <gtest/gtest.h>

TEST(Hw05Tests, Test1)
{
    VecOfStr input{"madam", "radar", "anagram", "rotor"};
    auto expected = VecOfStr{"madam", "radar", "rotor"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test2)
{
    VecOfStr input{"Madam, in Eden, I'm Adam"};
    auto expected = VecOfStr{"Madam, in Eden, I'm Adam"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test3)
{
    VecOfStr input{"Red roses run no risk, sir, on Nurse's order"};
    auto expected = VecOfStr{"Red roses run no risk, sir, on Nurse's order"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test4)
{
    VecOfStr input{"Won't lovers revolt now?"};
    auto expected = VecOfStr{"Won't lovers revolt now?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test5)
{
    VecOfStr input{"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    auto expected = VecOfStr{"A man, a plan, a canal, Panama!"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw06Tests, Test6)
{
    VecOfStr input{"a"};
    auto expected = VecOfStr{"a"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw07Tests, Test7)
{
    VecOfStr input{" z z "};
    auto expected = VecOfStr{" z z "};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw08Tests, Test8)
{
    VecOfStr input{""};
    auto expected = VecOfStr{""};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw09Tests, Test9)
{
    VecOfStr input{" "};
    auto expected = VecOfStr{" "};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw10Tests, Test10)
{
    VecOfStr input{"  z  "};
    auto expected = VecOfStr{"  z  "};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw11Tests, Test11)
{
    VecOfStr input{"  z "};
    auto expected = VecOfStr{"  z "};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw12Tests, Test12)
{
    VecOfStr input{" o m g g m o"};
    auto expected = VecOfStr{" o m g g m o"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}