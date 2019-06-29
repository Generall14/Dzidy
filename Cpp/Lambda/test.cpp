#include <iostream>

//-std=c++11

using namespace std;

int main()
{
	auto fun = [](int x)->float{cout << ": " << x+1 << endl; return x*2;};
	auto fun2 = [](int x){cout << ": " << x+2 << endl; return x*4;};
	fun(1);
	fun2(1);
	cout << "lambda: " << [](int x){cout << "'w funkcji '"; return x*63;}(2) << endl;
	
	int z=0;
	auto fun3 = [&z](){z++;};
// 	auto fun4 = [z](){z++;}; Błąd kompilacji, z jest read-olny
	auto fun5 = [&](){z++;}; // wszystko
// 	auto fun6 = [=](){z++;}; Błąd kompilacji, z jest read-olny
	cout << z << endl;
	fun3();
	cout << z << endl;
	fun5();
	cout << z << endl;
	
	return 0;
}
