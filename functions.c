#include "diagonal.h"

int** readData(FILE* fp, int* size){
    
    fscanf(fp, "%d", size);
    
    int siz = *size;
    int** arr;
    
    arr = (int**)malloc(siz * sizeof(int*));
    
    for(int q = 0; q < siz; q++){
        arr[q] = (int*)malloc(siz * sizeof(int));
    }
    
    int num;
    
    for(int i = 0; i < *size; i++){
        for(int j = 0; j < *size; j++){
            fscanf(fp, "%d", &num);
            arr[i][j] = num;
        }
    }
    
    return arr;
    
    
    
}

void calculateDiagonal(int siz, int** mat){
    
    int left = 0;
    int right = 0;
    
    
    
    
    
    
    for(int i = 0; i < siz; i++){
        for(int j = 0; j < siz; j++){
            
            if(i == j){
                left = left+mat[i][j];
            }
            
        }
        
    }
    
    int n = siz-1;
    int count = 0;
    
    for(int m = 0; m < siz; m++){
        count = 0;
        while(n > -1 && count == 0){
            right = right+mat[m][n];
            n--;
            count = 1;
        }
    }
    
    
    
    left = abs(left);
    right = abs(right);
    
    fprintf(stdout, "left:%d\n", left);
    fprintf(stdout, "right:%d", right);
    
    
    
    
}
