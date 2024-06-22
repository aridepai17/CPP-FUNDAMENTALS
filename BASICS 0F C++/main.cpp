// This is a single line comment //

/* This is a 
multiline comment */

#include <iostream> // Header file for input and output streams //

int main(){
    using namespace std;
    cout << "Welcome to C++"; // prints Welcome to C++ //
    return 0;


    // Scalar types //
    int i = 0;
    using namespace std;
    cout << i;
    char ch = 'a';
    bool flag = true; // true or false // 
    float f = 1.28f;
    double d = 521.342;

    // Vector type //
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Hello World\n" << 45 << " " << 8.9f << endl;
    int age;
    cout << "Tell me your age: ";
    cin >> age; // Prompt input from user //
    cout << "Your age is: " << age << endl;

    char buff[512]; // Buffer for user input - Buffers stop taking input after they encounter a space. //
    cout << "Enter your name: ";
    cin >> buff;
    cout << "Your name is: " << buff << endl;

    cout << "Enter your name: ";
    cin.getline(buff, 100, '\n'); // getline() takes input until newline is encountered. getline() takes three arguments. They are: buffer, size, delimiter. //
    cout << "Your name is: " << buff << endl;
    return 0;
}
