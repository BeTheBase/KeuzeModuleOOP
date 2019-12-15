
#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int intArray[] = { 1,2,3 };
	float floatArray[] = { 1.3,1.4,1.7 };

	sortArray<int[]>(intArray);
}

template<typename T>
void sortArray(T input)
{
	switch (input)
	{
	case std::vector<T>:
		std::vector<T> newVector = input;
		std::sort(newVector.begin(), newVector.end());
		for (T item : newVector)
		{
			std::cout << item << std::endl;
		}
		break;
	case T[]:
		T newArray[] = input;
		int n = sizeof(newArray) / sizeof(newArray[0]);
		std::sort(newArray, newArray + n)
			for (int i = 0; i < n; i++)
			{
				std::cout << newArray[i] << std::endl;
		}
		break;
	default:
		break;
	}
}