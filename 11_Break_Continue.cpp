#include <iostream>

int main()
{

    // break
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            break;
        }
        std::cout << "\ni = " << i;
    }

    // continue
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }

        std::cout << "\ni = " << i;
    }

    return 0;
}