#include <iostream>
// Function Definitions //
void Print(char ch){
    for(int i = 0; i < 10; i++){
        std::cout << ch;
    }
    std::cout << std::endl;
}
int Factorial(int x){
    int result = 1;
    for (int i = 1; i <= x; i++){
        result *= i;
    }
    return result;
}

int main(){
    Print('*'); // Function Call //
    int i;
    std::cout << "Enter a number: ";
    std::cin >> i;
    int result = Factorial(i);
    std::cout << "Factorial of " << i << " is " << result << std::endl;
    return 0;
}