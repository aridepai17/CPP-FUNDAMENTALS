#include "Car.h"
#include <iostream>

// Constructor implementation
Car::Car() : fuel(0), speed(0), passengers(0) {}

// Parameterized constructor implementation
Car::Car(float amount){
    fuel = amount;
    speed = 0;
    passengers = 0;
}

// Destructor implementation
Car::~Car(){
    std::cout << "Car destroyed" << std::endl;
}

// Fill fuel in the car
void Car::FillFuel(float amount) {
    fuel = amount;
}

// Accelerate the car
void Car::Accelerate() {
    speed++;
    fuel -= 0.5f;
}

// Brake the car
void Car::Brake() {
    speed = 0;
}

// Add passengers to the car
void Car::AddPassengers(int count) {
    passengers = count;
}

// Display car dashboard information
void Car::Dashboard() const {
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
}
