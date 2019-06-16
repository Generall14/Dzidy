#ifndef CLASSTOTEST_H
#define CLASSTOTEST_H

#include "classtofake.h"
#include "classtomock.h"

class ClassToTest
{
public:
    ClassToTest();

    void sumAndPut(ClassToFake* a, ClassToFake* b, ClassToMock* ret);
};

#endif // CLASSTOTEST_H
