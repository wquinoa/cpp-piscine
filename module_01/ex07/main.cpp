#include <fstream>
#include <iostream>

int main()
{
    std::ifstream src;
    std::string     whatisit;
    src.open("test", std::ifstream::out);
    src >> whatisit;
    std::cout << whatisit;
}