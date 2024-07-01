#ifndef CAR_H
#define CAR_H

class Car {
private:
    float fuel;
    float speed;
    int passengers;

public:
    // Constructor
    Car();
    // Parameterized constructor
    Car(float amount);

    // Member functions
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard() const;
};

#endif // CAR_H
