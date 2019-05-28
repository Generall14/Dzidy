#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
	for(int i=0;i<15;i++)
	{
		auto start = std::chrono::high_resolution_clock::now();
		this_thread::sleep_for(1ms);
		auto end = std::chrono::high_resolution_clock::now();
		chrono::duration<double, micro> elapsed = end - start;
		cout << elapsed.count() << endl;
	}
	return 1;
}
