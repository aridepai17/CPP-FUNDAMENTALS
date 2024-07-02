#include "Car.h"
#include <iostream>

Car::Car() {
    std::cout << "Car Created" << std::endl;
}

Car::Car(float amount) {
    fuel = amount;
}

void Car::FillFuel(float amount) {
    fuel += amount;
}

void Car::Accelerate() {
    this -> speed++;
    this -> fuel -= 0.5f;
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
