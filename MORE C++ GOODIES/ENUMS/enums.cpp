#include <iostream>
enum class Color{RED, GREEN, BLUE};

void  FillColor(Color color){
    // Fill background with some color
    if (color == Color::RED){
        // Paint with red color
        std::cout << "RED" << std::endl;
    } else if (color == Color::GREEN){
        // Paint with green color
        std::cout << "GREEN" << std::endl;
    }
    else if (color == Color::BLUE){
        // Paint with blue color
        std::cout << "BLUE" << std::endl;
    }
}

enum class TrafficLight{RED, YELLOW, GREEN};

int main(){
    Color c = Color::RED;
    FillColor(Color::GREEN);
    FillColor(c);
    FillColor(static_cast<Color>(2));

    int x = static_cast<int>(Color::RED);
    return 0;
}