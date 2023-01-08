#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num; // read an integer from the keyboard

    std::cout << "Double " << num << " is: " << num*2 << std::endl;
    std::cout << "Tripple " << num << " is: " << num*3 << std::endl;
    return 0;
}