#include <iostream>
using namespace std;

int main()
{
    int number1 = 2, number2 = 5;

    // Arithmetic operations
    cout << "+ : " << number1 + number2;
    cout << "\n- : " << number1 - number2;
    cout << "\n* : " << number1 * number2;
    cout << "\n/ : " << number1 / number2;
    cout << "\n% : " << number1 % number2;
    cout << "\n++ : " << number1++;
    cout << "\n-- : " << number1--;

    // Assignment operators
    cout << "\n= : a=1";
    cout << "\n+= : " << (number1 += 3);
    cout << "\n-= : " << (number1 -= 1);
    cout << "\n*= : " << (number1 *= 2);
    cout << "\n/= : " << (number1 /= 2);
    cout << "\n%= : " << (number1 %= 2);
    cout << "\n&= : " << (number1 &= 2);
    cout << "\n|= : " << (number1 |= 2);
    cout << "\n^= : " << (number1 ^= 2);
    cout << "\n>>= : " << (number1 >>= 4);
    cout << "\n<<= : " << (number1 <<= 1);

    // Comparison operators
    cout << "\n== : " << (number1 == number2);
    cout << "\n!= : " << (number1 != number2);
    cout << "\n> : " << (number1 > number2);
    cout << "\n< : " << (number1 < number2);
    cout << "\n>= : " << (number1 >= number2);
    cout << "\n<= : " << (number1 <= number2);

    // Logical operators
    cout << "\n&& : " << (number1 && number2);
    cout << "\n|| : " << (number1 || number2);
    cout << "\n! : " << (!number1);
    return 0;
}