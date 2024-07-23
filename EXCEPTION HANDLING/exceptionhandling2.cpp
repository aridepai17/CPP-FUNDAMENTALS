#include <iostream>
#include <memory>
#include <vector>

class A{
public:
    A(){
        std::cout << "Constructor" << std::endl;
    }
    ~A(){
        std::cout << "Destructor" << std::endl;
    }
};

class B{
public:
    B(){
        std::cout << "Constructor" << std::endl;
    }
    ~B(){
        std::cout << "Destructor" << std::endl;
    }
};

class Test{
    std::unique_ptr<A> pA{};
    B b{};
    std::unique_ptr<int> pInt{};
    std::string pStr{};
    std::vector<int> *pArr{};
public:
    Test(){
        std::cout << "Acquire resources" << std::endl;
        pA.reset(new A);
        throw std::runtime_error("Failed to initialize");
        /* pA = new A;
        pInt = new int;
        throw std::runtime_error("Exception");
        pChar = new char[1000];
        pArr = new int[100000]; */
    }
    ~Test(){
        std::cout << "Release resources" << std::endl;
        /* delete pA;
        delete pInt;
        delete[] pChar;
        delete[] pArr; */
    }
};

int main(){
    try{
        Test t;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}