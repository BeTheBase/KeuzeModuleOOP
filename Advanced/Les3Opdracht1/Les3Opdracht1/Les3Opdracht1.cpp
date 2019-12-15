#include <thread>
#include <iostream>
#include "Task.h"
#include <mutex>
#include <vector>
#include <future>
#include "ConcurrentVector.h"
#include <string>

std::mutex m;

template <class T>
class VectorContainer {
	std::vector<T> myVector;
public:
	VectorContainer() {	myVector = std::vector<T>();  }

	void drawVector() { 
		std::string items;
		for (T element : myVector)
		{

			std::cout << "Item: "<< std::to_string(element) << std::endl;
		}
	}
	void addItem(T item) { 
		{
			//std::lock_guard<std::mutex> guard(m);
			m.lock();
			myVector.push_back(item); 
			m.unlock();
		}
	}
	void removeItem(T item) { 	
		if (std::find(myVector.begin(), myVector.end(), item) != myVector.end())
		{
			//std::lock_guard<std::mutex> guard(m);
			m.lock();
			typename std::vector<T>::iterator it = myVector.begin();
			myVector.erase(std::remove(myVector.begin(), myVector.end(), item), myVector.end());
			m.unlock();
		}
	}
};

int main() {
	
	VectorContainer<int> myint = VectorContainer<int>();
	
	std::thread myFirstThread([&]() { myint.addItem(3); });
	std::thread mySecondThread([&]() { myint.removeItem(3); });
	std::thread myThridThread([&]() { myint.addItem(10); });

	myFirstThread.join();
	mySecondThread.join();
	myThridThread.join();

	myint.drawVector();

	return 0;
}



/*
template<typename P>
void uploadWithProgress(int* data, int size, P function)
{
	function(data, size);
}

void progress(int current, int total)
{
	std::cout << "Uploaded" << current << "van" << total << std::endl;
}

int accum = 0;

void square(std::promise<int>* promise, int x)
{
	int tmp = x * x;

	promise->set_value(tmp);

	/*
	{
		std::lock_guard<std::mutex> guard(m);
		accum += tmp;
	}

}

/*
void calculate()
{
	Task* taskPtr = new Task();

	std::vector<std::thread> threads;
	for (int i = 0; i < 100; i++)
	{
		threads.push_back(std::thread(&square, i));
	}
	for (auto& th : threads)
	{
		th.detach();
	}

	std::cout << "accum=" << accum << std::endl;
}

int value = 100;
bool notified = false;
std::condition_variable flag;

void reportValue()
{
	/*
	while (!notified)
	{
		std::cout << "Waiting" << std::endl;
	}
	std::unique_lock<std::mutex> lock3(m);
	while (!notified)
	{
		flag.wait(lock3);
	}
	std::cout << "Value= " << value << std::endl;

}

void calculateValue()
{
	std::this_thread::sleep_for(std::chrono::seconds(2));

	value = 20;
	flag.notify_one();
	notified = true;
}

template<typename T> 
T biggest(T a, T b)
{
	if (a > b) return a;
	return b;
}

class Particle
{
public:
	Particle(int i, bool alive) : index(i), alive(alive) {}
	bool isAlive() const { return alive; }

	int index;
private:
	bool alive;
};

bool isDead(Particle& p)
{
	return !p.isAlive();
}

int main()
{
	for(int i : {1, 3, 10, -1})
	{
		std::cout << biggest<int>(i, 2) << std::endl;
	}
	auto log = [](int x, int y) -> void
	{
		std::cout << x * y << std::endl;
	};
	int* data;

	uploadWithProgress(data, 100, [](int x, int y) {});

	std::vector<Particle> particles;

	for (int i = 0; i < 10; i++)
	{
		particles.push_back(Particle(i, i % 2 == 0));
	}

	std::remove_if(particles.begin(), particles.end(), isDead);// is the same 
	std::remove_if(particles.begin(), particles.end(), [](const Particle & p) { return !p.isAlive(); });// as this

	std::thread reportThread(reportValue);
	std::thread caculateThread(calculateValue);
	reportThread.join();
	caculateThread.join();

	/*
	std::promise<int> promise;
	std::future<int> future = promise.get_future();

	std::thread t(square, &promise, 15);
	t.detach();
	std::cout << "result = " << future.get() << std::endl;
	
	return 0;
}*/
