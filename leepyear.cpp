#include <iostream>
int main()
{
    int year;
    std::cout << "Enter the year= " << std::endl;
    std::cin >> year;
    if (year % 400 == 0)
        std::cout << "Leap year" << std::endl;
    else if ((year % 100 == 0) && (!year % 400 == 0))
        std::cout << "Not a leap Year " << std::endl;
    else if ((year % 4 == 0) && (!year % 100 == 0))
        std::cout << "Leap Year" << std::endl;
    else
        std::cout << "All other year are not a Leap year" << std::endl;
    return 0;
}