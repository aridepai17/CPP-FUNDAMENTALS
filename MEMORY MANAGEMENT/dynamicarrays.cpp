#include <cstdlib>
#include <iostream>
using namespace std;
#include <memory>

void DynArray(){

}

class Point{
public:
    Point(int x, int y){
        
    }
};

int main(){
    std::unique_ptr<int[]> p { new int {5} };
    auto p = std::make_unique<int>(5); // make_unique function
    auto pt = std::make_unique<Point>(5, 6);
    auto pArr = std::make_unique<int[]>(5);
    pArr[0] = 0;

    auto p = std::make_shared<int>(5); // make_shared function
    auto pt = std::make_shared<Point>(5, 6);
    auto pArr = std::make_shared<int[]>(5);

    pArr[0] = 0;

    p[0]= 100;
    p.get()[0] = 100;
}