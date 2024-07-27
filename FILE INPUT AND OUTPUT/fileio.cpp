#include <iostream>
#include <fstream>
#include <string>

void Write(){
    std::ofstream out{ "data.txt" };
    out << "Hello, World!" << std::endl;
    out << 323 << std::endl;
    out.close();
}

void Read(){
    std::ifstream input { "data.txt" };
    std::string message;
    std::getline(input, message);
    int value{};
    input >> value;
    input.close();
    std::cout << message << ":" << value << std::endl;
}

int main(){
    Write();
    Read();
    return 0;
}