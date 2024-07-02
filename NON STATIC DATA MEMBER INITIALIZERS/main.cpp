#include "Car.h"
#include <iostream>

int main() {
    Car c(5);
    c.Dashboard();
    c.FillFuel(10.0f);
    c.AddPassengers(3);
    c.Accelerate();
    c.Dashboard();
    c.Brake();
    c.Dashboard();
    return 0;
}