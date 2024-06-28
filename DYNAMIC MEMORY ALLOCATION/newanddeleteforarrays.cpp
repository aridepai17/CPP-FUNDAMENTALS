/*
new For Arrays
-> Another form of new
-> Used for allocating dynamic memory
-> Written as new[]
-> Subsequently, use delete[] to deallocate memory. ( releasing the memory )

SYNTAX for new[] and delete[]

<type> *<variable> = new <type>[size];
delete[] <variable>;
eg : int *p = new int[5]; // Allocates memory for 5 integers
delete[] p; // Releases memory allocated by new[]
*/

#include <iostream>
#include <string.h>
using namespace std;

void New(){
    int *p = new int[5]; // Allocates memory for 5 integers
    *p = 10;
    std::cout << *p << std::endl;
    delete p;
    p = nullptr;
}

void NewArrays(){
    int *p = new int[5]{1,2,3,4,5}; // Allocates memory for 5 integers
    for (int i = 0; i < 5; i++){
        p[i] = i;
    }
    delete[] p;
}

void Strings(){
    char *p = new char[10]; // Allocates memory for 4 characters
    strcpy(p, "C++");
    std::cout << p << std::endl;
    delete[] p;
}

int main(){
    NewArrays();
    Strings();
    return 0;
}