#include "gtest/gtest.h"
#include "../src/primes.h"
#include <vector>

using namespace std;

TEST(PrimeDivisionTest, NumberTwo){
    vector<int> expectedv;
    expectedv.push_back(2);
    EXPECT_EQ(expectedv, (primeDivision(2)));
}

TEST(PrimeDivisionTest, NumberThree){
    vector<int> expectedv;
    expectedv.push_back(3);
    EXPECT_EQ(expectedv, (primeDivision(3)));
}

TEST(PrimeDivisionTest, NumberFour){
    vector<int> expectedv;
    expectedv.push_back(2);
    expectedv.push_back(2);
    EXPECT_EQ(expectedv, primeDivision(4));
}

TEST(PrimeDivisionTest, NumberFive){
    vector<int> expectedv;
    expectedv.push_back(5);
    EXPECT_EQ(expectedv, primeDivision(5));
}

TEST(PrimeDivisionTest, NumberSix){
    vector<int> expectedv;
    expectedv.push_back(2);
    expectedv.push_back(3);
    EXPECT_EQ(expectedv, primeDivision(6));
}

TEST(PrimeDivisionTest, NumberFifteen){
    vector<int> expectedv;
    expectedv.push_back(3);
    expectedv.push_back(5);
    EXPECT_EQ(expectedv, primeDivision(15));
}