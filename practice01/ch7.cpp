#include <iostream>

int main()
{
    int sizeX = 1280, sizeY = 720, sizeZ = 480; 
    int i, j
    
    int ***arr = new int**[sizeX];
    for(int i =0; i<sizeX; i++)
    {
        arr[i]=new* int[sizeY];
        for(int j=0;j<sizeY;j++)
            arr[i][j] = new int[sizeZ]; 
    }

    
    
}

