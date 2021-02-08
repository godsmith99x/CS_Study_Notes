#include <string>
#include <iostream>

int main()
{


    std::string s1; //empty
    std::string s2 {"Frank"};   //Frank
    std::string s3 {s2};    //Frank
    std::string s4 {"Frank", 3};    //Fra
    std::string s5 {s3, 0, 2};  //Fr
    std::string s6 (3, 'X');    //XXX


    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;
    std::cout << s6 << std::endl;

    std::string part1 {"C++"};
    std::string part2 {"is a powerful"};

    std::string sentence;

    sentence = part1 + " " + part2 + " language";

    std::cout << sentence << std::endl;

    std::string sentence2;


    std::string s7;
    getline(std::cin, s7);

    std::cout << s7 << std::endl;


    return 0;
}
