#include "Integer.h"
#include <iostream>

int main(){
    Integer i(5);
    Integer i2(i);
    std::cout << i.GetValue() << std::endl;
    return 0;
}