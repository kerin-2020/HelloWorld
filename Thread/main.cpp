#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	while (!s_Finished)
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	}
	
}

int main()
{
	std::thread worker(DoWork);

	std::cin.get();
	s_Finished = true;//等待ENTER

	worker.join();//检查是否完成，在c#等高级语言中有类似的，WAIT???

	std::cin.get();
}