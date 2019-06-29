#ifndef MYLIB_HPP
#define MYLIB_HPP

// biblioteka *.so przez g++:
// g++ -fPIC -shared myLib.cpp -o myLib.so

class MyLib
{
public:
	virtual int testFun(int i);
};

#endif
