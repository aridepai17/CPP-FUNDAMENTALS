#include <iostream>

/*
template<typename T>
    void Print(std::initializer_list<T> args) {
        for (const auto &x : args) {
            std::cout << x << std::endl;
        }
    }
*/

void Print(){
    std::cout << std::endl;
    
}

// Template parameter pack
template<typename T, typename...Params>

// Function parameter pack
void Print(T a, Params...args){
    // std::cout << sizeof...(args) << std::endl;
    // std::cout << sizeof...(Params) << std::endl;
    std::cout << a << std::endl;
    if(sizeof...(args) != 0){
        std::cout << ", ";
    }
    Print(args...);
}

int main(){
    // Print(1, 2, 3, 4, 5);
    Print(1, 2.5, 3, "4");

    return 0;
}