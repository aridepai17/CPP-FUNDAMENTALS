#include <iostream>
#include <fstream>
#include <string>

void Write(){
    std::ofstream out{ "test.txt" };
    if (!out){
        std::cout << "Could not open file for writing!" << std::endl;
        return;
    }
    std::string message{ "C++ was invented by Bjarne Stroustrup" };
    for(char ch : message){
        out.put(ch);
    }
}

void Read(){
    std::ifstream input{ "test.txt" };
    if (!input){
        std::cout << "Source file not found!" << std::endl;
        return;
    }
    std::cout << "Current position is: " << input.tellg() << std::endl;
    char ch{};
    while(input.get(ch)){
        std::cout << ch;
    }
}

void UsingFstream(){
    std::fstream stream{ "test.txt" };
    if (!stream){
        std::cout << "File does not exist! So creating one instead" << std::endl;
        std::ofstream out{ "file.txt"};
        out.close();
        stream.open("file.txt");
    }
    stream << "Hello, World!" << std::endl;

    stream.seekg(0);
    std::string line;
    std::getline(stream, line);
    std::cout << line << std::endl;
}
int main(){
    Write();
    Read();
    return 0;
}