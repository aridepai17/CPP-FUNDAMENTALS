#include <iostream>
#include <functional>

int Subtract(int x, int y) {
    return x - y;
}

void Print(const char *str) {
    std::cout << str << std::endl;
}

struct GreaterThan{
    bool operator()(int x, int y) const {
        return x > y;
    }
};

int Operation(int x, int y, std::function<int(int, int)> callback){
    return callback(x, y);
}

int Accumulate(int x, int y, int z){
    return x + y + z;
}

int main(){
    using namespace std::placeholders;
    std::function<int(int, int)> f1 = std::bind(Subtract, std::placeholders::_1, std::placeholders::_2);
    std::cout << f1(10,4) << std::endl;

    auto f = std::bind(Subtract, _1 , 3);
    std::cout << f(5) << std::endl;

    auto gt = std::bind(GreaterThan{}, _1, _2);
    std::cout << gt(7, 3) << std::endl;

    auto acc = std::bind(Accumulate, _1, _2, 0);
    std::cout << Operation(5, 6, acc) << std::endl;


}