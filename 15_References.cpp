#include <iostream>

int main()
{
    std::string student1 = "max";
    std::string &name = student1;
    std::cout << "\nstuden1: " << student1;
    std::cout << "\nname: " << name;
    // memory address
    std::cout << "\nstuden1: " << &student1;

    return 0;
}