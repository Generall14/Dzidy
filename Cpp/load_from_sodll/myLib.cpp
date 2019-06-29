#include "myLib.hpp"

int MyLib::testFun(int i)
{
	return i*2;
}

extern "C" MyLib* makeMyLib()
{
	return new MyLib();
}

extern "C" void destroyMyLib(MyLib* ptr)
{
	delete ptr;
}
