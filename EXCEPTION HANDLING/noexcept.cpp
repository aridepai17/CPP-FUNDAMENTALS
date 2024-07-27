#include <iostream>

void Test(int x) noexcept(false){
    std::cout << x << std::endl;
    // throw x;
}

int Sum(int x, int y) noexcept(noexcept(Test(x))){
    Test(x);
    return x + y;
}

int main(){
    std::cout << std::boolalpha << noexcept(Test(10)) << std::endl;
    try{
        Sum(10, 20);
    }
    catch(int x){
        std::cout << x << std::endl;
    }
    return 0;
}