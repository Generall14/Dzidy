#include "gtest/gtest.h"
#include <iostream>
#include "../app/classa.h"

TEST(testMath, cubicTests)
{
    ClassA ca;
    int i = 10;
    EXPECT_EQ(1000, ca.cubic(i)) << "Tekst wyświetlony po błędzie z wartością " << i;
    EXPECT_EQ(8, ca.cubic(2));
}

TEST(testMath, twiceTests)
{
    ClassA ca;
    EXPECT_EQ(20, ca.twice(10));
    EXPECT_EQ(4, ca.twice(2));
}

//=====================================================================
class FixtureTest : public testing::Test
{
    protected:
    void SetUp() override
    {
        std::cout << "FixtureTest::SetUp MOCK" << std::endl;
        //...
    }

    void TearDown() override
    {
        std::cout << "FixtureTest::TearDown MOCK" << std::endl;
        //...
    }
    ClassA ca;
};

TEST_F(FixtureTest, fTests)
{
    EXPECT_EQ(20, ca.twice(10));
    EXPECT_EQ(40, ca.twice(20));
}

TEST_F(FixtureTest, fTests2)
{
    EXPECT_EQ(20, ca.twice(10));
    EXPECT_EQ(40, ca.twice(20));
}
