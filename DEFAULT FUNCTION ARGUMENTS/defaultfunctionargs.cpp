/*
DEFAULT FUNCTION ARGUMENTS
-> Allows some or all function arguments to have default values.
-> Optional to pass values to those arguments.
-> Compiler automatically assigns default values to those arguments, if no explicit value is provided.
-> Explicit value is preferred over default value.
-> Should begin from the right side in the list of function arguments.
-> Simplifies the invocation for the caller.
*/

#include <iostream>
void createwindow(const char *title, int x, int y, int width, int height);

void createwindow(const char *title, int x = 78, int y = -34 , int width = 76, int height = 65){  //Default function arguments
    using namespace std;
    cout << "Title: " << title << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
}

int main(){
    createwindow("My Window");
    return 0;
}