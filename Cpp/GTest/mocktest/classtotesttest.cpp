#include "gmock/gmock.h"
#include "../app/classtomock.h"
#include "../app/classtofake.h"
#include "../app/classtotest.h"

using ::testing::AtLeast;
using ::testing::_;

class MockClassToMock : public ClassToMock
{
public:
    MOCK_METHOD1(vTakeSomeValue, void(int));
};

class FakeClassToFake : public ClassToFake
{
public:
    FakeClassToFake(int in):_in(in){}
    int returnSomeValue(){return _in;}
private:
    int _in;
};

TEST(ClassToTestTest, wasInvoked)
{
    MockClassToMock classToMock;
    FakeClassToFake classToFake(2);
    EXPECT_CALL(classToMock, vTakeSomeValue(4));
    ClassToTest classToTest;

    classToTest.sumAndPut(&classToFake, &classToFake, &classToMock);
}
