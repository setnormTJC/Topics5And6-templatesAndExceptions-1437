// Topics5And6-templatesAndExceptions-1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm> //for merge
#include<array>
#include <iostream>
#include<string>
#include<vector> 

#include"CustomStaticArray.h" //me making my own version of

int main()
{
    //std::mer //note that there is "merge" and then there is "inplace_merge"
    
    //std::array object here for "inspiration" for what functions we "should" write:
    std::array<std::string, 3> namesStdArray =
    {
        "Alice", "Bob", "Carol"
    };
    
    

    std::vector<int> numsStdVector; //std::vector here just for observing static v dynamic differences 
    
    CustomStaticArray<int, 5> numsArray(11);
    //numsArray.print("\t");
    CustomStaticArray<char, 4> charArray('Z'); //char array (AKA: string)

    charArray[0] = 'S';
    charArray[1] = 'e';
    charArray[2] = 't';
    charArray[3] = 'h';
    //charArray = "Seth";//won't work (std::array also does not support this)

    CustomStaticArray<std::string, 7> names; 

    names[0] = "Alice";
    names[1] = "Bob";
    names[2] = "Carol";
    names[3] = "Darth";
    names[4] = "Eve";
    names[5] = "Frank";
    names[6] = "Gus";


    try
    {
        numsArray[1] = 12'334; 

        //auto reversedCharArray = charArray.reverse(); 

        //charArray.swap(0, 1); 
        //charArray.inplaceReverse(); 

        names.inplaceReverse(); 
        names.print("\n");
    }

    catch (const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }
}

