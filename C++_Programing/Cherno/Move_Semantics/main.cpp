#include <iostream>
#include <cstring>

//basic string class just for example of copying and moving
class String
{
public:
    String() = default;

    String(const char* string)
    {
        printf("Created!\n");
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    //Copy constructor
    String(const String &other)
    {
        printf("Copied!\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    ~String()
    {
        delete m_Data;
    }

private:
    char* m_Data;
    uint32_t m_Size;
};

//Entity class to consume string
class Entity
{
public:
    Entity(const String &name)
            : m_Name(name)
    {

    }

private:
    String m_Name;
};


int main()
{
    Entity entity(String("Joel"));

    std::cin.get();
    return 0;
}
