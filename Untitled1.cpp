#include <iostream>
#include <stdlib.h>

int main()
{
    int **coordinate;
    int xSize=1280, ySize=720;
    int i;
    
    coordinate = (int**)malloc(sizeof(int *)*ySize);
    for(i=0;i<ySize;i++){
        coordinate[i]=(int*)malloc(sizeof(int)*xSize);
    }
    
    for(int i=0; i <ySize; i++){
        free(coordinate[i]);
    }
    free(coordinate);
    
}
