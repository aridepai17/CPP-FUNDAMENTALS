#include <iostream>
#include <cmath>

double calculateHypotenuse(const double a, const double b){
    return std::sqrt(a * a + b * b);
}

double calculateCompoundInterest(const double principal, const double rate,
const int time, const int years){
    return principal * std::pow(1 + rate / time, time * years);
}

int main(){
    using namespace std;
    float radius = 0;
    cin >> radius;
    const float PI = 3.1415; // Pi is a constant
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    double sidea, sideb;
    std::cout << "Enter side A of a right triangle: ";
    cin >> sidea;
    std::cout << "Enter side B of a right triangle: ";
    cin >> sideb;
    const double hypotenuse = calculateHypotenuse(sidea, sideb);
    std::cout << "Hypotenuse: " << hypotenuse << std::endl;

    double principal, rate,time,years;
    std::cout << "Enter the initial amount (principal): ";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate (in decimals): ";
    std::cin >> rate;
    std::cout << "Enter the number of times the interest is compounded per year: ";
    std::cin >> time;
    std::cout << "Enter the number of years of the investment: ";
    std::cin >> years;

    const double amount = calculateCompoundInterest(principal, rate, time, years);
    std::cout << "Amount after " << years << " years: " << amount << std::endl;
    
    return 0;
}