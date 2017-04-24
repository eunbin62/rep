#include <iostream>
#include <string.h>

struct Person{
    char name[20];
    int age;
};

int main()
{
    struct Person *p1 = new struct Person[sizeof(struct Person)];
    void *ptr;
    
    strcpy(p1->name, "김한동");
    p1 -> age = 30;
    
    ptr = p1;
    
    std::cout<<"이름:"<<p1-> name <<std::endl;
    std::cout<<"나이:"<<p1-> age <<std::endl;
    
    delete [] p1;
    
    return 0;
}