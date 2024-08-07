#include<iostream>
#include<type_traits>

template<typename T>
T Divide(T a, T b){
    if(std::is_floating_point<T>::value == false){
        std::cout << "Use floating point types only\n";
        return 0;
    }
    return a/b;
}

template<typename T>
void Check(T &&){
    std::cout << std::boolalpha;
    std::cout << "Is reference?" << std::is_reference<T>::value << std::endl;
    std::cout << "After reference: " << std::is_reference<typename std::remove_reference<T>::type>::value << std::endl;
}

class Number{
    int m_Number;
public:
    Number() = default;
    Number(int x): m_Number(x){
        
    }
};

int main(){
    Check(5);
    int value{};
    Check(value);
}
    