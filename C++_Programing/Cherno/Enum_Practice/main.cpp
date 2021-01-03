#include <iostream>

//by specifying the type of the enum, we can control the size of the memory used (i.e. 8 bits for char vice 32 bit
// for int)
enum Example : unsigned char
{
    A, B, C
};



int main()
{

    Example value = B;

    if (1 == value)
    {
        //do something
    }

    std::cin.get();
    return 0;
}
