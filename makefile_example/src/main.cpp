#include <iostream>
#include "cat.h"

int main( int argc, char const * argv[]){
    std::cout << "Hello From docker container!" << std::endl;
    Cat oyen;
    oyen.meow();
    return 0;
}