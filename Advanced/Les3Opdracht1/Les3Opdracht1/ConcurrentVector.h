#pragma once
#include <iostream>
#include <vector>
#include <future>


template<class T>
class ConcurrentVector
{
	std::vector<T> mySaveVector;
public:
	ConcurrentVector() { mySaveVector = std::vector<T>(); }
	~ConcurrentVector();

	void addItem(T item);
	void removeItem(T item);
	void draw() {
		std::cout << "My vector: " << mySaveVector.size() << std::endl;
	};
};



