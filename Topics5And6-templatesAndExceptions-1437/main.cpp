// Topics5And6-templatesAndExceptions-1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<array>
#include <iostream>
#include<string>

#include"CustomStaticArray.h" //me making my own version of

int main()
{

    std::array<std::string, 3> names =
    {
        "Alice", "Bob", "Carol"
    };
    

    CustomStaticArray<int, 4> numsArray(11);

    numsArray.print("\t");

    try
    {
        numsArray[123] = 12'334; 
    }

    catch (const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }

    //std::cout << "Hello World!\n";
}

