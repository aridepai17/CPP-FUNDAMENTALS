#include <iostream>
#include <typeinfo>
template <typename T>

struct Unnamed{
    T operator()(T x, T y)const{
        return x + y;
    }
};

int main(){
    auto fn = [](){
        std::cout << "Welcome to Lambda expressions" << std::endl;
    };
    fn();
    std::cout << typeid(fn).name() << std::endl;
    auto sum = [](auto x, auto y)noexcept(false){
        return x + y;
    };
    Unnamed<int> n;
    std::cout << "Sum is: " << sum(5.7f, 8.9f) << std::endl;
    return 0;
}
