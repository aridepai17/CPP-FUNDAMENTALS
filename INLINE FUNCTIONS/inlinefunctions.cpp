/*
INLINE FUNCTIONS
-> A function that is marked with the inline keyword is called an inline function.
-> Such functions are defined in the header file.
-> Requests the compiler to replace the call with the function body.
-> The overhead of the function call is avoided.
-> Stack memory for arguments is not used, no need to save return addresses.
-> Improves the performance of the program.

//
Syntax:
inline void Functionname(arguments){
    // Implementation
}
//

-> Certain functions may not be inlined.
    -> Large functions.
    -> Functions having too many conditional statements.
    -> Recursive functions.
    -> Functions invoked through pointers.
-> Modern compilers may automatically inline even non-inlined functions.
-> Excessive inlining may increase binary size
-> The call is replaced with the body of the function.
-> Safe to use as it has function semantics.
-> Has an address unlike macro functions.
-> Class member functions can be inlined.
*/

#include<iostream>
using namespace std;

inline int square(int x){
    return x * x;
}

int main(){
    int value = 5;
    int result = square(value + 1);
    cout << result << endl;
    return 0;
}