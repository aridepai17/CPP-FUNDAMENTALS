/*
Syntax
for(variable declaration: range){
    statements;
}
int arr[] = {1, 2, 3, 4, 5};
for(int x : arr){
    cout << x << endl;
}

*/

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){     // Traditional for loop 
        cout << arr[i] << endl;
    }

    for (int x : arr){              // Range based for loop
        cout << x << endl;
    }

    for (const auto &x : arr){      // Range based for loop using auto and const and reference
        cout << x << endl;
    }

    for (auto x : arr){             // Range based for loop using auto
        cout << x << endl;
    }

    int *begin = &arr[0];          // Using pointers
    int *end = &arr[5];
    while (begin != end){
        std::cout << *begin << ' ';
        ++begin;
    }

    int *start = std::begin(arr);  // Using std::begin and std::end functions
    int *finish = std::end(arr); 
    while (start != finish){
        std::cout << *start << ' ';
        ++start;
    }

    /*
    auto &&range = arr;                 // Using for loop using std::begin and std::end functions
    auto begin = std::begin(arr);       // Since we use &&range we can use range in the begin and end functions instead of arr 
    auto end = std::end(arr);
    for(;begin != end; ++begin){
        auto v = *begin;
    }
    */ 
    return 0;
}