#include <iostream>

int func1(){
    std::cout << "Function 1 print\n";
    return 79;
}

int func2(){
    std::cout << "Function 2 print\n";
    return 206;

}

//A simple program to practice using functions
int main() {

    std::cout << "Starting Main\n\n";
    std::cout << func1() << '\n';
    std::cout << func2() << '\n';
    std::cout << "\n\nEnding Main";


    return 0;
}

//https://www.learncpp.com/cpp-tutorial/introduction-to-functions/
