# include <iostream>
#include <stdlib.h>

int main(int argc, const char * argv){
    char buff[1000];

    std::cout<<"Enter the expression. " << std::endl;
    std::cin.getline(buff, 1000);
    
    int i;
    int j;
    char k;
    
    std::cout << i << k << j << std::endl;
    std::cout<<buff[0]<<"k"<<buff[1] <<std::endl;


    
    //char opr =;
    
    
    switch(k){
        case '+':
            std::cout << i+j;
            break;
        case '-':
            std::cout << i-j;
            break;
        case '*'';
            std::cout << i *j;
            break;
        case '/':
            std::cout << (double) i/j ;
            break;
            
    }
    
    return 0;
}