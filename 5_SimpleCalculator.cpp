#include <iostream>
using namespace std;

int main()
{
    int number1, number2, result, operation;

    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Enter opeartion:\nAddition:1\nSubtraction:2\nMultiplication:3\nDivision:4\nModulus:5";
    cin >> operation;

    switch (operation)
    {
    case 1:
        result = number1 + number2;
        cout << "Sum: " << result;
        break;

    case 2:
        result = number1 - number2;
        cout << "Difference: " << result;
        break;
    case 3:
        result = number1 * number2;
        cout << "Product: " << result;
        break;
    case 4:
        if (number2 != 0)
        {
            result = number1 / number2;
            cout << "Quotient: " << result;
            break;
        }
        else
        {
            cout << "Cannot divide by zero";
            break;
        }
    case 5:
        result = number1 % number2;
        cout << "Modulus: " << result;
        break;

    default:
        cout << "Invalid operation!";
        break;
    }
    return 0;
}