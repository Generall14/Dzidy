#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int* p = new int();
	delete p;
	*p = 100;
	
	vector<int> vec;
	vec.push_back(1);
	auto it = vec.begin();
	cout << *(it++) << endl;
	cout << *(it++) << endl;
	cout << "koniec" << endl;
	return 0;
}
