#include <iostream>

constexpr int GetNumber(){
    return 45;
}

constexpr int Add(int x, int y){
    return x + y;
}

constexpr int Max(int x, int y){
    if (x > y)
        return x;
    return y;
   // return x > y ? x : y;
}

int main(){
    constexpr int i = GetNumber();
    int arr[i];

    const int j = GetNumber();
    int arr1[j];

    int x = GetNumber();

    constexpr int sum = Add(5, 8);

    int sum2 = Add(98, 45);
    return 0;
}