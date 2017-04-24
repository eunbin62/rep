#include <iostream>

void func(int a)
{
    std::cout<<"void func(int a) called!" << std::endl;
    
}

void func(int a, int b)
{
    std::cout<<"void func(int a, int b) called" << std::endl;
}

int main()
{
    func(4);
    func(5,6);
    return 0;
}

