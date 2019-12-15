#include "ConcurrentVector.h"

/*
template<class T >
ConcurrentVector<T>::ConcurrentVector()
{
	mySaveVector = std::vector<T>();
}

template<class T>
ConcurrentVector<T>::~ConcurrentVector()
{
	
}

template<class T>
void ConcurrentVector<T>::addItem(T item)
{
	//mySaveVector.push_back(item);
}

template<class T>
void ConcurrentVector<T>::removeItem(T item)
{
	//if (std::find(mySaveVector.begin(), mySaveVector.end(), item) != mySaveVector.end())
	//mySaveVector.erase(std::remove(mySaveVector.begin(), mySaveVector.end(), item), mySaveVector.end());
}

template<class T>
void ConcurrentVector<T>::draw()
{
	std::cout << "My vector: " << mySaveVector.size() << std::endl;
	/*
	for (T item : mySaveVector)
	{
		std::cout << item << std::endl;
	}
}*/
