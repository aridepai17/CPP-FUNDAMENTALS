/*
README: Understanding Different Types of Initialization in C++

This README file provides a detailed explanation of various types of initialization in C++ as demonstrated in the provided code snippet.
*/

#include <iostream>
#include <string>

int main(){
    // 1. Uninitialized
    // Variables declared without explicit initialization. The values of these variables are indeterminate.
    int a1; // Uninitialized
    std::string s1; // Uninitialized
    char d1[8]; // Uninitialized

    // 2. Direct Initialization
    // Variables are initialized directly using parentheses or braces.
    int a3(5); // Direct Initialization
    std::string s2("C++"); // Direct Initialization
    int b3{5}; // Direct Initialization

    // 3. Copy Initialization
    // Variables are initialized by copying the value into the variable. This is done using the assignment operator.
    int a2 = 0;
    int b4 = 0;

    // 4. Aggregate Initialization
    // Arrays or structures are initialized using a list of values in curly braces.
    char d3[8] = {'a', 'b', 'c', 'd'}; // Aggregate Initialization
    char d4[8] = {"C++"};
    char e2[8]{"Hello"};
    char *p3 = new char[8]{"Hello"};

    // 5. Value Initialization
    // Variables are initialized with an empty set of braces, ensuring they are zero-initialized.
    int b1{}; // Value Initialization
    char e1[8]{}; // Value Initialization
    int *p1 = new int{}; // Value Initialization
    char *p2 = new char[8]{}; // Value Initialization

    // 6. Most Vexing Parse
    // An ambiguity in C++ where what looks like a variable declaration is interpreted as a function declaration.
    int b2(); // Most vexing parse (interpreted as function declaration)

    /* 
    Uniform Initialization
    Uniform Initialization uses curly braces {} to initialize variables. This method has several advantages:

    1. Forces Initialization: Ensures that variables are initialized, preventing potential bugs due to uninitialized variables.
    2. Supports Arrays: Allows for direct initialization of array types.
    3. Prevents Narrowing Conversions: Helps avoid unintentional loss of data by preventing narrowing conversions.
    4. Consistency: Provides a uniform syntax for initializing all types, enhancing code readability and consistency.
    */
    
    int b3{5}; // Direct Initialization using Uniform Initialization
    int b1{}; // Value Initialization using Uniform Initialization
    char e1[8]{}; // Value Initialization using Uniform Initialization

    /*
    Summary of Initialization Types:
    - Uninitialized: No explicit initialization; values are indeterminate.
    - Direct Initialization: Uses parentheses or braces; T object(v); or T object{v}.
    - Copy Initialization: Uses the assignment operator; T object = v.
    - Aggregate Initialization: Uses curly braces to initialize arrays or structures.
    - Value Initialization: Uses empty braces to ensure zero-initialization; T object{}.
    - Most Vexing Parse: Ambiguous syntax interpreted as a function declaration.

    Understanding these initialization types is crucial for writing robust and error-free C++ programs. By leveraging Uniform Initialization, you can achieve safer and more consistent code.
    */

    return 0;
}
