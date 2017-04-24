#include<iostream>
int main(){

    
    int i,sizeX=1280,sizeY=720;
    int **arr = new int*[sizeY];        //5행만큼 동적할당.

    for (i=0; i<sizeY; i++){        //열의 수만큼 각 행에 동적으로 메모리 공간을 할당함 */

        arr[i] = new int[sizeX];
    }
    
    for(i=0; i<sizeY; i++){
        delete [] arr[i];    //열에 해당하는 메모리공간 해제 
    }
    delete [] arr;            //행에 해당하는 메모리 공간 해제
    
    return 0;
}

