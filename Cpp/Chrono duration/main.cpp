#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>
#include <numeric>

using namespace std;

int main()
{
	vector<double> vec;
	auto t1 = std::chrono::high_resolution_clock::now();
	for(int i=0;i<20000;i++)
		vec.push_back(i*1.11);
	auto t2 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> ms = t2 - t1;
	cout << "inicjalizacja: " << ms.count() << " ms" << endl;
	
	t1 = std::chrono::high_resolution_clock::now();
	double wy = std::accumulate(vec.begin(), vec.end(), 0, [=](const double &a, const double &b)->double{return a + b;});
	t2 = std::chrono::high_resolution_clock::now();
	ms = t2 - t1;
	cout << "suma: " << wy << " bliczona w " << ms.count() << " ms" << endl;
	
	return 0;
}
