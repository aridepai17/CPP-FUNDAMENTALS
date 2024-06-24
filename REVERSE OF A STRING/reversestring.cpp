#include <iostream>
#include <cstring>

int main(){
    char str[100], temp;
    int i, j;

    std::cout << "Enter a string to reverse: ";
    std::cin >> str;

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    std::cout << "Reverse of the string: " << str << std::endl;
    return 0;
}