#include <iostream>
#include "Date.h"

int main() {
    Date date1(12, 25, 2014);
    std::cout << std::endl;
    date1.printMonthDayYearAllNumbers();
    date1.printMonthDayYearString();
    date1.printDayMonthYearString();

    return 0;
}