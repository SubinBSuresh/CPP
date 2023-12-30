#include <iostream>

// Function declaration
// void printSomething(std::string greet = "default");

// Function definition
void printSomething(std::string greet = "default")
{
    std::cout << "\nPrinting something " << greet;
}
int main()
{
    printSomething("hello");
    printSomething("morning");
    printSomething();
    return 0;
}
