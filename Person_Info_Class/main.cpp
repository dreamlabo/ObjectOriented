#include <iostream>
#include "PersonalInfo.h"

#include <iomanip>
#include <vector>

const void printPersonalInfo(std::vector <PersonalInfo>& persons){
    const int WIDTH_ONE = 18;
    const int WIDTH_TWO = 25;
    const int WIDTH_THREE = 7;


    std::cout << "\e[1m" << "______________________________________________________________" << std::endl;
    std::cout << std::left << std::setw(WIDTH_ONE ) << "Name" << std::setw(WIDTH_TWO) << "Address"  << std::setw(WIDTH_THREE) << "Age"
              << std::setw(WIDTH_THREE) << "Phone Number" << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;

    for(size_t i = 0; i < persons.size(); i++){
        std::cout << std::left << std::setw(WIDTH_ONE) <<
        persons[i].getName() << std::setw(WIDTH_TWO) <<
        persons[i].getAddress() << std::setw(WIDTH_THREE) <<
        persons[i].getAge() << std::setw(WIDTH_THREE) <<
        persons[i].getPhoneNumber()  << std::endl;

    }

}

int main() {

    std::vector<PersonalInfo> persons;
    PersonalInfo personOne("Todd", "5281 S. Main St.", 51, "123-456-7890");
    persons.push_back(personOne);

    PersonalInfo personTwo("Aiden", "5281 S. Main St.", 12, "123-456-7890");
    persons.push_back(personTwo);

    PersonalInfo personThree("Sandi", "5281 S. Main St.", 48, "123-456-7890");
    persons.push_back(personThree);
    std::cout << "Hello, World!" << std::endl;

    printPersonalInfo(persons);
    return 0;
}