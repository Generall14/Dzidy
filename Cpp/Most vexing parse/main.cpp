class B
{
public:
	B(){}
};

class A
{
public:
	A(B){}
	void fun(){}
};

int main()
{
	A a(B()); 	// To jest traktowane jako deklaracja funkcji! 
				//Problem rozwiążą nawiasy klamrowe: A a{B()};
	a.fun();
	return 0;
}
