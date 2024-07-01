#include <iostream>
// Structure
struct Point{
    int x;
    int y;
};

void Drawline(Point p1, Point p2){
    std::cout << p1.x << std::endl;
    std::cout << p1.y << std::endl;
}

int main(){
    Point p1;
    p1.x = 10;
    p1.y = 20;
    Point p2;
    p2.x = 30;
    p2.y = 40;
    Drawline(p1, p2);
}