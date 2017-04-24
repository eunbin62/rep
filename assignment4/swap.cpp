#include <iostream>

void swap(int *, int *);
void swap(char *, char *);
void swap(double *, double *);

int main(){
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;
    
    char str1='A', str2 = 'Z';
    swap(&str1,&str2);
    std::cout<<str1<<' '<<str2<<std::endl;
    
    double db11 = 1.111, db12 = 5.555;
    swap(&db11, &db12);
    std::cout<<db11<<' '<<db12<<std::endl;
    return 0;
}

void swap(int *num1, int *num2){
    int temp=0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
}

void swap(char *str1, char *str2){
    char temp = 0;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void swap(double *db11, double *db12){
    double temp = 0;
    temp = *db11;
    *db11 = *db12;
    *db12 = temp;
    
}