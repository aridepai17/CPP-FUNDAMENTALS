/*
FUNCTION POINTERS
-> Pointer that holds the address of the function.
-> The type is same as the signature of the function.(return type and arguments)
-> Can be used to indirectly invoke the function even if function name is not known at compile time.
-> Used by algorithms and classes for customization.

//
SYNTAX
<return type> (*fnptr) (args) = &function name
int (*ptr) (int a, int b) = &Add // int Add(int , int)
//

atexit() - this function is used to print a message before the program terminates.

*/

#include <iostream>
using namespace std;

void Print (int count, char ch){
    for (int i = 0; i < count; i++){
        cout << ch;
    }
    cout << endl;
}

void endmessage (){
    cout << "End of program" << endl;
}

int main(){
    Print (5, '#');
    void (*pfn) (int, char) = Print;
    (*pfn) (7, '$');
    pfn ( 10, '%');
    atexit (endmessage);
    return 0;
}