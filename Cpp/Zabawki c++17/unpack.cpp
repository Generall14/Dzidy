#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

std::pair<int, int> fun1()
{
	return std::pair<int, int>(1, 2);
}

std::tuple<int, string, float> fun2()
{
    return std::tuple<int, string, float>(5, "6s", 7.7);
}

struct ss
{
    string s;
    float f;
};

int main()
{
	auto [a, b] = fun1();
	cout << a << endl;
	cout << b << endl;
	
	auto [c, d, e] = fun2();
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	
	vector<ss> vec = {{"a", 1}, {"b", 2}};
	for(const auto& [first, second]: vec)
	    cout << first << " " << second << endl;
	return 0;
}
