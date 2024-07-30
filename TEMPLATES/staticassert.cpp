#include<iostream>
#include<type_traits>

template<typename T>
T Divide(T a, T b) {
    static_assert(std::is_floating_point<T>::value, "Use floating point types only");
    if(std::is_floating_point<T>::value == false) {
        std::cout << "Using floating types only\n";
        return 0;
    }
    return a / b;
}

int main() {
    std::cout << std::boolalpha << "Is Integer?" << std::is_integral<int>::value << std::endl;
    std::cout << Divide(9.2, 87.9) << std::endl;

    return 0;
}