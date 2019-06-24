#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

class Dupa
{
public:
	Dupa(){}
	static void XX(){}
};

float fun(int i, Dupa d, int j)
{
}

int main()
{
	int a;
	float b;
	string s;
	Dupa d();
	
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(s).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(fun).name() << endl;
	cout << typeid(Dupa::XX).name() << endl;
}
