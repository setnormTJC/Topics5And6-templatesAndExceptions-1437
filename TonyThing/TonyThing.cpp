#include <string>
#include <iostream>
class MyClass 
{
public:
    /*explicit */MyClass(int value) 
        : 
        data(value) 
    {} // Explicit constructor
 
    int data;
    //std::string adsf; 

};

void processMyClass(MyClass obj) {
    // ...

    obj.data = 12312; 

}

int main() {
    MyClass obj1 = 10; // Error: cannot convert 'int' to 'MyClass' implicitly
    //MyClass obj2(20); // OK: direct initialization
    //processMyClass(MyClass(30)); // OK: explicit construction
    // processMyClass(40); // Error: cannot convert 'int' to 'MyClass' implicitly

    //int letter = "adsfads";
    std::string asdf = "1"; 

    int a = std::stoi("123");


    std::cout << a + 1 << "\n"; //1231

    //int a = 23123.434534123; //implicit conversion from double to float
    //std::cout << a << "\n";

    return 0;
}