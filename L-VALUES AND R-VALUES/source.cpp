#include <iostream>
// Returns r-value
int Add(int a, int b) {
    return a + b;
}

// Returns l-value
int Transform(int &x) {
    x *= x;
    return x;
}

void Print(int &x) {
    std::cout << "Print(int &)" << std::endl;
}

void Print(const int &x) {
    std::cout << "Print(const int &)" << std::endl;
}

void Print(int &&x) {
    std::cout << "Print(int &&)" << std::endl;
}

int main() {
    int x = 10;
    Print(x);
    Print(4);
    return 0;
}