//g++ -std=c++11 main.cpp -pthread

#include <thread>
#include <iostream>
#include <chrono>
#include <string>

class BackgroundTask
{
public:
	BackgroundTask()
	{
		std::cout << "Konstruktor" << std::endl;
	}
	BackgroundTask(const BackgroundTask& f)
	{
		std::cout << "Konstruktor k" << std::endl;
	}
	~BackgroundTask()
	{
		std::cout << "Destruktor" << std::endl;
	}
    void operator()()
    {
        std::cout << "Hello from a thread..." << std::endl;
		std::cout << "watek BackgroundTask " << std::this_thread::get_id() << std::endl;
		while(1)
		{
			//std::this_thread::yield();
			msg();
			if(kill)
				return;
		}
		//msg();
    }
    void msg()
	{
		//while(1)
		{
			std::chrono::milliseconds dura( 500 );
			std::this_thread::sleep_for( dura );
			std::cout << "watek BackgroundTask " << std::this_thread::get_id() << std::endl;
			std::cout << tekst << std::endl;
			//tekst = "nic";
			std::this_thread::yield();
		}
	}
	std::string tekst;
	volatile bool kill=false;
};

int main()
{
	std::cout << "watek main " << std::this_thread::get_id() << std::endl;
    BackgroundTask bt;
    std::thread t1(bt);
	//t1.detach();
		for(int i=0;i<5;i++)
		{
			std::chrono::milliseconds dura( 1001 );
			std::this_thread::sleep_for( dura );
			bt.msg();
			bt.tekst += "jakis tekst";
			std::cout << "main "<< std::endl;
		}
		bt.kill=true;
    //std::thread t2(BackgroundTask());
// 	while(1)
// 	{
// 		std::chrono::milliseconds dura( 500 );
// 		std::this_thread::sleep_for( dura );
// 		bt.msg();
// 	}
    t1.join();
    //t2.join();
}
