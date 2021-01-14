#include <iostream>

void tail(int n)
{
    if (0 == n)
        return;

    std::cout << "Tail function called with n= " << n << std::endl;

    tail(n - 1);
}

void head(int n)
{
    if (0 == n)
        return;

    head(n - 1);

    std::cout << "Head function called with n= " << n << std::endl;
}

int main()
{
    tail(10);

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    head(10);

    std::cin.get();

    return 0;
}
