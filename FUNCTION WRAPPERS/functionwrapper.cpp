#include <iostream>
#include <functional>

int Square(int x) { 
    return x * x; 
}

int Add(int x, int y) {
    return x + y;
}

int Subtract(int x, int y) {
    return x - y;
}

struct Max{
    int operator()(int x, int y) const {
        return x > y ? x : y;
    }
};

int Operation(int x, int y, std::function <int(int, int)> callback){
    return callback(x, y);
}

int main(){
    try{
        std::function<int(int)> f1 = Square;
        std::cout << f1(5) << std::endl;

        Max m{};
        std::function<int(int, int )> f2 = m;
        std::cout << f2(5, 6) << std::endl;

        std::function<bool(int)> f3 = [](int x) { return x % 2 == 0; };
        std::cout << "IsEven?" << f3(6) << std::endl;

        std::function<int(int, int)> f4 = Add;
        std::cout << Operation(5, 6, f4) << std::endl;
        f4 = Subtract;
        std::cout << Operation(5, 6, f4) << std::endl;
        std::cout << Operation(5, 6, [](int x, int y) { return x * y; }) << std::endl;
    }
    catch(const std::exception& e){
        std::cout << "Exception: " << e.what() << "" << '\n';
    }
}