#include <iostream>
#include "Car.h"

void printCarSpeed(Car car){
    std::cout << "The speed of the " << car.getYearModel() << " " <<
              car.getMake() << " is now: " <<  car.getSpeed() << " mph" << std::endl;
}

void accelerateVehicle(Car &car){
    std::cout << "\nAccelerating..." << std::endl;
    car.accelerate();
    printCarSpeed(car);
}

void brakeVehicle(Car &car){
    std::cout << "\nBraking..." << std::endl;
    car.brake();
    printCarSpeed(car);
}

int main() {

    Car car(2010, "Blazer");
    std::cout << "Creating a " << car.getYearModel() << " " << car.getMake() << std::endl;


   accelerateVehicle(car);
   accelerateVehicle(car);
   accelerateVehicle(car);
   accelerateVehicle(car);
   accelerateVehicle(car);


   brakeVehicle(car);
   brakeVehicle(car);
   brakeVehicle(car);
   brakeVehicle(car);
   brakeVehicle(car);
   





    return 0;
}