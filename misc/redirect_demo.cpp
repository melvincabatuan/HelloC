#include <iostream>
#include <sstream>
#include <random>
#include <ctime>

int main()
{
    auto cout_buf = std::cout.rdbuf();
    std::stringbuf sb;
    std::cin.rdbuf(&sb);
    std::cout.rdbuf(&sb);

    std::mt19937 rand(time(nullptr));
    std::cout << (rand() % 100);

    int number;
    std::cin >> number;

    std::cout.rdbuf(cout_buf);
    std::cout << "The number was " << number << std::endl;

    return 0;
}