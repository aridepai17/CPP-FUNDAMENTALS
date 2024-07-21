#include <iostream>

union Test{
    int x;
    char ch;
    double d;
    Test(): ch{ 'a' }{
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    ~Test(){
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main(){
    std::cout << sizeof(Test) << std::endl;
    Test t;
    std::cout << t.ch << std::endl;

    t.x = 1000;

    std::cout << t.ch << std::endl;

    return 0;
}