#include <iostream>

int main(){
    int n, i;
    bool isprime = true;

    std::cout << "Enter a number to check if it is a prime number: ";
    std::cin >> n;

    if (n == 0 || n == 1){
        isprime = false;
        printf("%d is neither a prime number nor a composite number\n", n);
        exit(0);
    }
    else{
        for (i = 2; i < n; i++){
            if (n % i == 0){
                isprime = false;
                break;
            }
        }
    }

    if (isprime)
        std::cout << n << " is a prime number" << std::endl;
    else
        std::cout << n << " is not a prime number" << std::endl;
}