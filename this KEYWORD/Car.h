#pragma once
#include <iostream>

class Car {
private:
    float fuel{ 0 };
    float speed{ 0 };
    int passengers{ 0 };

public:
    Car();
    Car(float amount);
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard() const;
    ~Car();
};