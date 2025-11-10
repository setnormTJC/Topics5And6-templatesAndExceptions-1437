#pragma once

#include<initializer_list>
#include<stdexcept>

//#include<exception>

template<typename SomeDataType, int maxSize>
class CustomStaticArray
{
	//C-style 
	SomeDataType cStyleArray[maxSize];

public:
	CustomStaticArray() = default;
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
	/*@brief 
	* if array = {a, b, c}, swap(0, 1) gives {b, a, c}
	*/
	void swap(int leftIndex, int rightIndex)
	{
		SomeDataType copyOfLeftElement = cStyleArray[leftIndex];

		cStyleArray[leftIndex] = cStyleArray[rightIndex];
		cStyleArray[rightIndex] = copyOfLeftElement;
	}

	/*performs SWAPS - uses less space (memory/RAM) than the "out of place" reverse*/
	void inplaceReverse()
	{
		for (int i = 0; i < maxSize / 2; ++i)
		{
			int leftIndex = i; 
			int rightIndex = maxSize - i -1; 

			swap(leftIndex, rightIndex);
		}
	}

	void sort()
	{
		//but how? 
	}

	CustomStaticArray<SomeDataType, maxSize> reverse()
	{
		CustomStaticArray reversedArray{}; //alternative syntax for calling default constructor 

		for (int i = maxSize - 1; i >= 0; --i)
		{
			SomeDataType temp = cStyleArray[i]; 
			int reversedArrayIndex = i - maxSize + 1; 

			reversedArray[reversedArrayIndex] = temp; 
		}
		
		return reversedArray; 
	}

};