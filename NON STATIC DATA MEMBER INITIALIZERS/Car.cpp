#include "Car.h"
#include <iostream>

Car::Car() {
}

Car::Car(float amount) {
    fuel = amount;
}

void Car::FillFuel(float amount) {
    fuel += amount;
}

void Car::Accelerate() {
    if (fuel > 0) {
        speed++;
        fuel -= 0.5f;
    } else {
        std::cout << "Not enough fuel to accelerate." << std::endl;
    }
}

void Car::Brake() {
    speed = 0;
}

void Car::AddPassengers(int count) {
    passengers = count;
}

void Car::Dashboard() const{
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
}

Car::~Car() {
    std::cout << "Car Destroyed" << std::endl;
}
