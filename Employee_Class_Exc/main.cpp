#include <iostream>
#include "Employee.h"
#include <vector>
#include <iomanip>

//Prototypes
void printEmployeeInfo(std::vector<Employee>&);

int main() {

    std::vector<Employee> employeesVector;

    Employee employee1;
    // Uses the default constructor and then setters
    employee1.setName("Susan Meyers");
    employee1.setIDNumber(47899);
    employee1.setDepartment("Accounting");
    employee1.setPosition("Vice President");
    employeesVector.push_back(employee1);

    // Uses Constructor #2
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    employeesVector.push_back(employee2);

    // Uses Constructor #3
    Employee employee3("Joy Rogers", 81774);
    employee3.setDepartment("Manufacturing");
    employee3.setPosition("Engineer");
    employeesVector.push_back(employee3);

    printEmployeeInfo(employeesVector);
    return 0;
}

// Functions
void printEmployeeInfo(std::vector<Employee>& employeesVector){
    const int WIDTH = 15;

    std::cout << "\e[1m" << "____________________________________________________________" << std::endl;
    std::cout << std::left << std::setw(WIDTH) << "Name" << std::setw(WIDTH) << "ID Number"  << std::setw(WIDTH) << "Department"
              << std::setw(WIDTH) << "Position" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    for(std::size_t i = 0; i < employeesVector.size(); i++){
        std::cout << std::left << std::setw(WIDTH) <<
                  employeesVector[i].getName() << std::setw(WIDTH) <<
                  employeesVector[i].getIDNumber() << std::setw(WIDTH) <<
                  employeesVector[i].getDepartment() << std::setw(WIDTH) <<
                  employeesVector[i].getPosition() << std::endl;
    }

    std::cout << "____________________________________________________________" << "\e[0m" << std::endl;
}