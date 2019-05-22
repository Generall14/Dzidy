#include <iostream>
#include <string>

using namespace std;

enum a:unsigned int
{
	aa=1,
	ab,
	ac,
};

enum b:char
{
	ba='a',
	bb='b',
	bc='c',
};



enum plain_enum // wartości są wywalane do przestrzeni zewnętrznej
{
	vala,
	valb
};

enum class class_enum // wartosci są lokalne
{
	cvala,
	cvalb
};


int main()
{
	a va = a::ab;
	b vb = b::bb;
	
	b vc = static_cast<b>('c');
	
	cout << static_cast<int>(va) << endl;
	cout << static_cast<char>(vb) << endl;
	cout << static_cast<char>(vc) << endl;
	
	plain_enum pe = vala;
	//class_enum ce = cvala; // ERROR
	class_enum ce = class_enum::cvala;
	
	return 0;
}
