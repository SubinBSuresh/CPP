#include <iostream>

int main()
{

    std::string names[4] = {"asus",
                            "hp",
                            "samsung",
                            "acer"};

    // sizeof returns result in byte
    int nameSize = sizeof(names) / sizeof(int);
    names[3] = "dfdfdfd";

    for (int i = 0; i < nameSize; i++)
    {

        std::cout << "\n"
                  << names[i];
    }

    return 0;
}