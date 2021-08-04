//
// Created by toddl on 8/2/2021.
//

#include "Employee.h"

Employee::Employee(std::string name, int idNumber, std::string department, std::string position) {
this->name = name;
this->idNumber = idNumber;
this->department = department;
this->position = position;
}

Employee::Employee() {
    this->name = "";
    this->idNumber = 0;
    this->department = "";
    this->position = "";
}

Employee::Employee(std::string name, int idNumber) {
this->name = name;
this->idNumber = idNumber;
this->department = "";
this->position = "";
}
