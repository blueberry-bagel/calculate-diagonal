#ifndef DIAGONAL_H
#define DIAGONAL_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int** readData(FILE* fp, int* size);

void calculateDiagonal(int siz, int** mat);



#endif
