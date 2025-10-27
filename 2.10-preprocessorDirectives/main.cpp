#include <iostream>
#include "testing.h" //including the header file 

//NO NEED FOR FORWARD DECLARATION BECAUSE OF THE INCLUDE

int main() {

    //using the macro defined in testing.h
    #ifdef HELLO
        std::cout << HELLO << '\n';
    #endif

    // using the function created in testing.h
    printSomething();


    #if 0 //ALWAYS SKIPS THIS CODE BLOCK
    std::cout << "This code is not included" << '\n';
    #endif

    #if 1 //ALWAYS RUNS THIS CODE BLOCK
    std::cout << "This code is included" << '\n';
    #endif


    return 0;
}
