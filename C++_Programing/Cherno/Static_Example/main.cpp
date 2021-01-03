#include <iostream>

//tells compiler to look for s_Variable in an external translation unit
extern int s_Variable;

void Function()
{

}

struct Entity
{
    int x, y;

    void Print() const
    {
        std::cout << x << " , " << y << std::endl;
    }

};

int main()
{
    std::cout << s_Variable << std::endl;

    Entity e{};
    e.x = 2;
    e.y = 3;

    Entity e1 = {5, 8};

    e.Print();
    e1.Print();

    std::cin.get();

    return 0;
}
