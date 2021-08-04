//
// Created by toddl on 8/2/2021.
//

#ifndef EMPLOYEECLASS_EMPLOYEE_H
#define EMPLOYEECLASS_EMPLOYEE_H


#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    // Constructors
    Employee();
    Employee(std::string, int, std::string, std::string);
    Employee(std::string, int);

    //Getters
    std::string getName() { return this->name; }
    int getIDNumber() { return this->idNumber; }
    std::string getDepartment() { return this->department;}
    std::string getPosition() { return this->position; }

    // Setters
    void setName (std::string employeeName){ this->name = employeeName; }
    void setIDNumber (int id){ this->idNumber = id; }
    void setDepartment (std::string employeeDepartment){ this->department =  employeeDepartment; }
    void setPosition (std::string employeePosition){ this->position = employeePosition; }
};



#endif //EMPLOYEECLASS_EMPLOYEE_H
