#include "../include/hw06.h"
#include <gtest/gtest.h>

TEST(Hw06Tests, Test1)
{
    MyIntVector vec = MyIntVector();
    int real_size = vec.size();
    int expected = 0;
    EXPECT_EQ(real_size, expected);
}

TEST(Hw06Tests, Test2)
{
    MyIntVector vec = MyIntVector();
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    bool flag = true;

    for(int i=0;i<3 && flag;i++)
        if(i+1 != vec[i])
            flag = false;
    
    EXPECT_EQ(flag, true);
}

TEST(Hw06Tests, Test3)
{
    MyIntVector vec = MyIntVector();
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    int real_length = vec.size();
    int expected_length = 3;
    EXPECT_EQ(real_length, expected_length);
}

TEST(Hw05Tests, Test4)
{
    try{
        MyIntVector vec = MyIntVector(-1);
    }catch(const std::runtime_error& exc) {
        EXPECT_EQ(exc.what(), std::string("Size must be more then zero or equal zero\nActual: "+-1));
    }
    catch(...) {
        FAIL() << "Expected std::runtime_error";
    }
}

TEST(Hw06Tests, Test5)
{
    MyIntVector vec = MyIntVector(3,3);

    bool flag = true;
    for(int i = 0;i < 3 && flag;i++){
        if(3 != vec[i])
            flag=false;
    }

    EXPECT_EQ(true, flag);
}

TEST(Hw06Tests, Test6)
{
    MyIntVector vec = MyIntVector(5);
    vec.push_back(1);
    vec = vec.shrink_to_fit();
    EXPECT_EQ(1, vec.capacity());
}

TEST(Hw06Tests, Test7)
{
    try{
        MyIntVector vec = MyIntVector();
        vec = vec.resize(-1);
    }catch(const std::runtime_error& exc) {
        EXPECT_EQ(exc.what(), std::string("Size must be more then zero or equal zero\nActual: "+-1));
    }
    catch(...) {
        FAIL() << "Expected std::runtime_error";
    }
}

TEST(Hw06Tests, Test8)
{
    MyIntVector vec = MyIntVector(1,1);
    EXPECT_EQ(1, vec[0]);
}

TEST(Hw06Tests, Test9)
{
    try{
        MyIntVector vec = MyIntVector();
        vec = vec.resize(-2);
    }catch(const std::runtime_error& exc) {
        EXPECT_EQ(exc.what(), std::string("Size must be more then zero or equal zero\nActual: "+-2));
    }
    catch(...) {
        FAIL() << "Expected std::runtime_error";
    }
}

TEST(Hw06Tests, Test10)
{
    try{
        MyIntVector vec = MyIntVector();
        vec = vec.resize(-3);
    }catch(const std::runtime_error& exc) {
        EXPECT_EQ(exc.what(), std::string("Size must be more then zero or equal zero\nActual: "+-3));
    }
    catch(...) {
        FAIL() << "Expected std::runtime_error";
    }
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}