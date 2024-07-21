#include <iostream>

class Animal{
public:
    void eat(){
        std::cout << "I am eating" << std::endl;
    }

    void sleep(){
        std::cout << "I am sleeping" << std::endl;
    }

    void breathe(){
        std::cout << "I am breathing" << std::endl;
    }
};

class Dog : public Animal{
public:
    void eat(){
        std::cout << "I am eating dog food" << std::endl;
    }

    void sleep(){
        std::cout << "I am sleeping soundly" << std::endl;
    }
};

int main(){
    Dog d;
    d.eat();
    d.sleep();
    d.breathe();

    return 0;
}