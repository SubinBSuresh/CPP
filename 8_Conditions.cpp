#include <iostream>

int main()
{
    int number1 = 10, number2 = 20;
    // if loops

    if (number1 > number2)
    {
        std::cout << "Number 1 is bigger";
    }
    else if (number1 < number2)
    {
        std::cout << "\nNumber 2 is bigger";
    }

    else
    {
        std::cout << "\nBoth numbers are same";
    }

    // Ternary operator
    int bigger = (number1 > number1) ? number1 : number2;
    std::cout << "\nBigger number: " << bigger;

    return 0;
}