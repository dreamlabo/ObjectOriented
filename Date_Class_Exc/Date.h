//
// Created by toddl on 8/14/2021.
//
#include <iostream>

#ifndef DATE_CLASS_EXC_DATE_H
#define DATE_CLASS_EXC_DATE_H

class Date {
    private:
        int month;
        int day;
        int year;

    public:
        Date(int month, int day, int year){
            this->month = month;
            this->day = day;
            this->year = year;
        }

    void printMonthDayYearAllNumbers(){
        std::cout << this->month << "/" << this->day << "/" << this->year << std::endl;
    }

    std::string getMonthString(int m){
        std::string months[12] = {"January", "February", "March",
                                  "April", "May", "June",
                                  "July", "August", "September",
                                  "October", "November", "December"};
        return months[month - 1];
    }

    void printMonthDayYearString() {
        std::cout << this->getMonthString(this->month) << " " << this->day << "," << this->year << std::endl;
    }

    void printDayMonthYearString() {
        std::cout << this->day << " " << this->getMonthString(this->month) << " " << this->year << std::endl;
    }

};


#endif //DATE_CLASS_EXC_DATE_H
