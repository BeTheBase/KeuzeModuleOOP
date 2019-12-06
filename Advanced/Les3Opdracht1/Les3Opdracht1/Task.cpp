#include "Task.h"
#include <thread>


Task::Task()
{
}

Task::~Task()
{

}

void Task::performTask(int x)
{
	x = x * x;
	std::cout << x << std::this_thread::get_id(); 
}
