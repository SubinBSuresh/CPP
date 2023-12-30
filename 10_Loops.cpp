#include <iostream>

int main()
{
    int i = 0;

    // while loop
    while (i <= 10)
    {
        std::cout << "\ni = " << i;
        i++;
    }

    // do while loop
    do
    {
        std::cout << "\ni = " << i;
        i++;
    } while (i <= 10);

    // for loop
    for (int i = 0; i <= 10; i++)
    {
        std::cout << "\ni = " << i;
    }

    // for each loop

    int array[5] = {1, 2, 3, 4, 5};
    for (int i : array)
    {
        std::cout << "\n Array element:" << i;
    }
    {
        /* code */
    }

    return 0;
}