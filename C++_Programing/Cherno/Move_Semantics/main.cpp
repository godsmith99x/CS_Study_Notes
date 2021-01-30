#include <iostream>
#include <cstring>

//Basic string class just for example of copying and moving
//TODO:need to be null terminated
class String
{
public:
    //1. Default constructor
    String() = default;

    //2. String constructed by passing in an argument of a series of  characters through a const pointer to array of
    // char-m_Sized block of memory on the heap.
    explicit String(const char* string)
    {
        printf("Created!\n");
        //2.a Uses strlen() to calculate length of the string passed in to create the size of the array
        // of characters.
        m_Size = strlen(string);

        //2.b Creates the space on the heap for memcpy() to copy in the string.
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    //3. Copy constructor, creates a copy of a string in a new location on the heap.
    String(const String &other)
    {
        printf("Copied!\n");
        //3.a Sets the size for the array on the heap to the size of other.m_Size property.
        m_Size = other.m_Size;

        //3.b Creates the new array on the heap and memcpy() copies in the other.m_Data property.
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    //4. Move constructor. Similar to Copy constructor, but it uses an rvalue reference (&&) to take name in as a
    // temporary value rather than creating a copy and then deleting it.
    String(const String &&other) noexcept
    {

    }

    //5. Destructor
    ~String()
    {
        //5.a Deletes this instance's data from the heap.
        printf("Deleted!\n");
        delete m_Data;
    }

    //6. Public method to print the string.
    void Print()
    {
        //6.a Loop through each uint32_t sized index in the array.
        for (uint32_t i = 0; i < m_Size; ++i)
        {
            //5.b printf() the character at that index in the array.
            printf("%c", m_Data[i]);
        }
        printf("\n");
    }

private:
    //7. Private variables to store a pointer to the data and the size of the array.
    char* m_Data{};
    uint32_t m_Size{};
};

//Entity class to consume string
class Entity
{
public:
    explicit Entity(const String &name)
            : m_Name(name)
    {

    }

    explicit Entity(const String &&name)
            : m_Name(name)
    {

    }

    void PrintName()
    {
        m_Name.Print();
    }

private:
    String m_Name;
};


int main()
{
    //Create a Entity named Joel. If we don't have a String constructor with move semantics, it will create a String
    // "Joel" and then copy its data into Entity "Joel", which is an necessary copy.
    Entity entity(String("Joel"));
    entity.PrintName();

    std::cin.get();
    return 0;
}
