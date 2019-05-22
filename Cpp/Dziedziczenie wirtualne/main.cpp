#include <iostream>

using namespace std;

class base
{
public:
	static int cnt;
	int cntl = 0;
	base()
	{
		cout << "base:: constructor" << endl;
		cntl = cnt++;
	}
	void p()
	{
		cout << cnt  << " " << cntl << endl;
	}
};

int base::cnt = 0;

class B : virtual public base
{
};

class C : virtual public base
{
};

class A : public B, public C
{
public:
	void p()
	{
		B::p();
		C::p();
		
	}
};

int main()
{
	A a;
	a.p();
	return 0;
}
