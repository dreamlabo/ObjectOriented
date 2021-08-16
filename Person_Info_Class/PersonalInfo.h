//
// Created by toddl on 8/16/2021.
//

#include <string>

#ifndef PERSON_INFO_CLASS_PERSONALINFO_H
#define PERSON_INFO_CLASS_PERSONALINFO_H


class PersonalInfo {
private:
    std::string _name;
    std::string _address;
    int _age;
    std::string _phoneNumber;

public:
    PersonalInfo(std::string name, std::string address, int age, std::string phoneNumber){
        this->_name = name;
        this->_address = address;
        this->_age = age;
        this->_phoneNumber = phoneNumber;
    }

    //Accessors
    const std::string getName(){
        return this->_name;
    }

    const std::string getAddress(){
        return this->_address;
    }

    const int getAge(){
        return this->_age;
    }

    const std::string getPhoneNumber(){
        return this->_phoneNumber;
    }

    // Setters
    void setName(std::string name){
        this->_name = name;
    }

    void setAddress(std::string address){
        this->_address = address;
    }
    void setName(int age){
        this->_age = age;
    }
    void setPhoneNumber(std::string phoneNumber){
        this->_phoneNumber = phoneNumber;
    }


};


#endif //PERSON_INFO_CLASS_PERSONALINFO_H
