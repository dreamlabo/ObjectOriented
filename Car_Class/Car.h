//
// Created by toddl on 8/14/2021.
//

#ifndef CAR_CLASS_CAR_H
#define CAR_CLASS_CAR_H

#include <iostream>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;
    const int SPEED_INCREMENT = 5;
    const int BREAKING_SPEED = 5;

public:
    Car(int yearModel, std::string make){
        this->yearModel = yearModel;
        this->make = make;
        this->speed = 0;

    }

    // Accessors
    int getYearModel() {
        return this->yearModel;
    }

    std::string getMake(){
        return this->make;
    }

    int getSpeed(){
        return this->speed;
    }

    void accelerate(){
        this->speed += this->SPEED_INCREMENT;
    }

    void brake(){
        if(this->speed > 0){
            this->speed -= this->BREAKING_SPEED;
        }
    }


};


#endif //CAR_CLASS_CAR_H
