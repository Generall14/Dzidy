#ifndef CLASSTOMOCK_H
#define CLASSTOMOCK_H

class ClassToMock
{
public:
    ClassToMock();
//    virtual ~ClassToMock(){}

    void takeSomeValue(int takes);
    virtual void vTakeSomeValue(int takes);
};

#endif // CLASSTOMOCK_H
