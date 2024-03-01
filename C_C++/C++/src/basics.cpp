#include <iostream>

void execForLoop()
{
    for (int i = 0; i < 4; i++)
    {
        std::cout << i;
    }
    std::cout << std::endl;
}

void execWhileLoop()
{
    std::string str = "Here is a basic program in C++";
    int i = 0;

    while (str[i])
    {
        std::cout << str[i++];
    }
    std::cout << std::endl;
}

void execDoWhileLoop()
{
    std::string str2 = "But very basic";
    int index = 0;

    do
    {
        std::cout << str2[index++];
    } while (str2[index]);
    std::cout << std::endl;
}

void printFloat()
{
    float pi = 3.14159;

    std::cout << "Did you know that pi is ~= " << pi << " ?" << std::endl;
}