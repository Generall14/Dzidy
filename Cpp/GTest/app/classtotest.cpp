#include "classtotest.h"

ClassToTest::ClassToTest()
{

}

void ClassToTest::sumAndPut(ClassToFake* a, ClassToFake* b, ClassToMock* ret)
{
    ret->takeSomeValue(a->returnSomeValue()+b->returnSomeValue());
    ret->vTakeSomeValue(a->returnSomeValue()+b->returnSomeValue());
}

