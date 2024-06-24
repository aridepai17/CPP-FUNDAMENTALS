#include <iostream>

/* 
void swap(int *x, int *y){  // Pass by address //
    int temp = *x;
    *x = *y;
    *y = temp;
}
*/

/* 
void swap(int &x, int &y){  // Pass by reference // 
    int temp = x;
    x = y;
    y = temp;
}
*/

/*
void Print(int *ptr){       // Pass by address //
    using namespace std;
    if(ptr != nullptr)
        cout << *ptr << "\n";
}
*/

/*
void Print(int &ptr){       // Pass by reference //
    using namespace std;
    cout << *ptr << "\n";
}
*/

void swap(int *x, int *y){  // Pass by address //
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Print(int *ptr){       // Pass by address //
    using namespace std;
    if(ptr != nullptr)
        cout << *ptr << "\n";
}

int main(){
    using namespace std;
    int a = 5, b = 10, x=17;
    swap(&a, &b);
    Print(&x); 
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    return 0;
}