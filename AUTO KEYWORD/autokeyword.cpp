// Syntax -> auto < identifier > = < initializer >;
#include <iostream>

int Sum(int x, int y){
    return x + y;
}

int main(){
    auto i = 10;
    auto j = 5;
    auto sum = i + 4.3f;
    auto result = Sum(i , j);
    static auto y = 2;
    auto list { 1 };

    return 0;
}

/*
In C++, the auto keyword is used for type inference, allowing the compiler 
to automatically deduce the type of a variable from its initializer. T
his feature, introduced in C++11, provides several benefits:

1. Simplifies Code: It reduces the verbosity of the code, especially for 
complex types. Instead of explicitly declaring a variable with a 
long type name, you can use auto to make the code cleaner and easier to read.

2. Reduces Errors: By letting the compiler deduce the type, it minimizes the risk 
of type mismatches and reduces the likelihood of errors related to incorrect type declarations.

3. Improves Maintainability: When the type of a variable changes, you only need to change the initializer 
expression, not the type declaration. This makes the code easier to maintain and refactor.

Overall, auto improves code readability, reduces redundancy, and helps prevent type-related errors, making C++ 
code more robust and maintainable.
*/