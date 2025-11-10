#pragma once

#include<stdexcept>

//#include<exception>

template<typename SomeDataType, int maxSize>
class CustomStaticArray
{
	//C-style 
	SomeDataType cStyleArray[maxSize];

public:
	CustomStaticArray() = delete;
	CustomStaticArray(SomeDataType initialValueOfAllArrayElements)
	{
		for (int i = 0; i < maxSize; ++i)
		{
			cStyleArray[i] = initialValueOfAllArrayElements;
		}
	}

	SomeDataType& operator [] (int index)
	{
		if (index < 0 || index > maxSize - 1)
		{
			throw std::runtime_error(
				"index cannot be less than 0 or greater than the maxSize, bro\n");
		}

		return cStyleArray[index];
	}

	std::string getFront()
	{
		return cStyleArray[0];
	}

	void print(const std::string& separator)
	{
		for (int i = 0; i < maxSize; ++i)
		{
			std::cout << cStyleArray[i] << separator; 
		}

		std::cout << "\n";
	}

	//void reverse()
	//{

	//}

	CustomStaticArray<SomeDataType> reverse()
	{

	}

};