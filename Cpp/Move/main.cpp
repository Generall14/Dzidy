#include <iostream>

using namespace std;

class Test
{
public:
	Test():ptr(0){cout << "konstruktor domyślny " << endl;}
	Test(int a)
	{
		cout << "konstruktor Test " << a << endl;
		ptr = a;
	}
	Test(Test &r)
	{
		cout << "konstruktor kopiujący " << r.ptr << endl;
		ptr = r.ptr;
	}
	Test(Test &&r)
	{
		cout << "konstruktor Move " << r.ptr << endl;
		ptr = r.ptr;
	}
	Test& operator+(Test &r)
	{
		ptr += r.ptr;
	}
// 	~Test(){delete ptr;}

// private:
	int ptr;
};

int main(int argc, char**argv)
{
	Test a(1), b(2), c(a), d;
	Test dd = a+b;
	a = d;
	return 0;
}