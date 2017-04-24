#include <iostream>
#include <stdlib.h>

int main()
{
    char size; //문자열의 최대 길이
    char *info; // 힙 메모리의 할당된 데이터의 주소값을 저장할 변수


    std::cout << "배열의 사이즈 입력하세요: ";
    std::cin >> size; // 문자열 사이즈 입력
    info = (char *)malloc(sizeof(char) * size); //동적할당
    
    std::cout<<"Input : ";
    std::cin>>info; //문자열입력
    

    std::cout<<"User Input: " << info << std::endl;
    
    free(info);
    return 0;
    
}