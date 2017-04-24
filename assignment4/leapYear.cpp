#include <iostream>

bool leapYear(int year);

int main(void)
{
    int year;
    std::cout<<"\n INPUT : ";
    std::cin>>year;
    if(leapYear(year))
        std::cout<< "Leap Year" << std::endl;
    else
        std::cout<< "Common Year" << std::endl;
    return 0;
}

bool leapYear(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    return true;
    return false;
}