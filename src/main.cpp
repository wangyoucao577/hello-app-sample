
#include "hello.h"
#include <iostream>

int main(int argc, char** argv) {
    
    #ifdef NDEBUG
    std::cout << "hello app Release!" <<std::endl;
    #else
    std::cout << "hello app Debug!" <<std::endl;
    #endif

    hello();

    return 0;
}
