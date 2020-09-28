#include <iostream>


int main() {
    
    int favNum;
    
    std::cout << "Enter your favorite number between 0-100: " << std::endl;

    //takes input from user through the terminal
    std::cin >> favNum; 

    std::cout << "Wow! That's my favorite number too!" << std::endl;

    std::cout << "No, " << favNum << " really is my favorite." << std::endl;

    return 0;
}


