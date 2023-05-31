#include <iostream>
#include <ctime>
#include<iomanip> 
#pragma warning(disable:4996)
int main() {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;
    int day = localTime->tm_mday;

    std::cout << year << "-" << std::setw(2) << std::setfill('0') << month << "-" << std::setw(2) << std::setfill('0') << day << std::endl;

    return 0;
}
