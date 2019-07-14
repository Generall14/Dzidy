#include <iostream>

using namespace std;

int getVal(int in)
{
    return in;
}

int main()
{
	if(auto b=getVal(100); b==100)
	    cout << b << " to sto " << endl;
	else
	    cout << b << " to nie sto" << endl;
	// b++; poza zasięgiem
	return 0;
}
