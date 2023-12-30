#include <iostream>

int main()
{
    std::string name = "Stew";

    std::cout << "\nValue: " << name;
    std::cout << "\nMemory address: " << &name;

    // pointer variable
    std::string *ptr = &name;
    // Output the memory address
    std::cout << "\nMemory address: " << ptr;

    // Output the value
    // dereference operator
    std::cout << "\nValue: " << *ptr;

    return 0;
}