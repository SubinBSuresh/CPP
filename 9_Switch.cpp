#include <iostream>

int main()
{
    int day = 4;

    switch (day)
    {
    case 1:
        std::cout << "\n It is Sunday";
        break;
    case 2:
        std::cout << "\n It is Monday";
        break;
    case 3:
        std::cout << "\n It is Tuesday";
        break;
    case 4:
        std::cout << "\n It is Wednesday";
        break;
    case 5:
        std::cout << "\n It is Thursday";
        break;
    case 6:
        std::cout << "\n It is Friday";
        break;
    case 7:
        std::cout << "\n It is Saturday";
        break;

    default:
        std::cout << "\n Not a day";
        break;
    }
    return 0;
}