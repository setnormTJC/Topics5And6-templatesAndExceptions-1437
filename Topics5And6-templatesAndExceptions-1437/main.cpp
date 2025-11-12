// Topics5And6-templatesAndExceptions-1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm> //for merge
#include<array>
#include <iostream>
#include<random> 
#include<string>
#include<vector> 

#include"demos.h"
#include"CustomStaticArray.h" //me making my own version of

int main()
{
	//std::sort() //the wheel that has already been invented
	//CustomStaticArray<std::string, 5> names;
	//
	//names[0] = "Romero"; 
	//names[1] = "Bielitz"; 
	//names[2] = "Thomas";
	//names[3] = "Mendez"; 
	//names[4] = "Hahn";
	//
	//std::cout << "Initial state of names array: \n";
	//names.print(" ");

	//names.sort(); 

	//std::cout << "State of names array after sorting: \n";
	//names.print(" ");



	constexpr int N = 100; //N stands for the Number of elements (this is VERY important "Big O Notation")
	CustomStaticArray<int, N> arrayOfNumbers; 

	
	std::mt19937 rng(std::random_device{}()); //this looks confusing, but it works

	std::uniform_int_distribution<int> dist(0, N);

	for (int i = 0; i < N; ++i)
	{
		//std::cout << dist(rng) << "\n";
		arrayOfNumbers[i] = dist(rng);
	}

	std::cout << "Initial state of the array of random numbers (between 0 and 100): \n";
	arrayOfNumbers.print(" ");

	arrayOfNumbers.sort(); //a class OWNS its data

	std::cout << "State of the array of random numbers after sorting: \n";
	arrayOfNumbers.print(" ");


	//std::sort(nums.begin(), nums.end(0))
}

