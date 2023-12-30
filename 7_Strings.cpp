#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Hello";
    std::string audience = "World";
    std::cout << "String name: " << audience;

    // concatenation
    std::string concatenatedGreetingWithPlus = greeting + " " + audience;
    std::cout << "\nConctenated string using + : " << concatenatedGreetingWithPlus;
    std::string concatenatedGreetingWithAppend = greeting.append(" ").append(audience);
    std::cout << "\nConcatenated string using append(): " << concatenatedGreetingWithAppend;

    // length
    int stringSize = concatenatedGreetingWithAppend.size();
    std::cout << "\nString size: " << stringSize;

    // String inputs
    std::string userInput;
    std::cout << "\nEnter user string: ";
    getline(std::cin, userInput);
    std::cout << "\nUser string: " << userInput;
    return 0;
}