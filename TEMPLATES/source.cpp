#include <iostream>
#include <string.h>
#include <typeinfo>

/* 
int Max(int a, int b) {
    return a > b ? a : b;
}

float Max(float a, float b) {
    return a > b ? a : b;
}
*/

// Primary Template
template<typename T>
T Max(T a, T b) {
    std::cout << typeid(T).name() << std::endl;
    return a > b ? a : b;
}

// Explicit Instantiation
template char Max(char a, char b);

// Explicit Specialization
template<> const char * Max<const char *> (const char *a, const char *b) {
    std::cout << "Max <const char*>()" << std::endl;
    return strcmp(a, b) > 0 ? a : b;
}

template <int size>
void Print() {
    char buffer[size];
    std::cout << size << std::endl;
}

/*
template <typename T>
T Sum(T *parr, int size) {
    T sum{};
    for (int i = 0; i < size; i++) {
        sum += parr[i];
    }
    return sum;
}
*/ 

template <typename T, int size>
T Sum(T (&parr)[size]) {
    T sum{};
    for (int i = 0; i < size; i++) {
        sum += parr[i];
    }
    return sum;
}

int main(){
    Max(static_cast<float>(3), 5.5f);
    Max<double>(3.9f, 5.7f);
    int (*pfn)(int, int) = Max;

    /* 
    auto num = Max(3.9f, 5.7f);
    std::cout << num << std::endl;
    auto num2 = Max(3, 5);
    std::cout << num2 << std::endl;
    */

    const char *b{ "B" };
    const char *a{ "A" };
    auto s = Max(a, b);
    std::cout << s << std::endl;

    Print<3>();

    int arr[5]{ 1, 2, 3, 4, 5 };
    int (&ref)[5] = arr;
    int sum = Sum(arr);
    std::cout << sum << std::endl;

    return 0;
}