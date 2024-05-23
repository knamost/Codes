// Write a program to multiply two matrices.

#include <stdio.h>
#define MAX_ROWS 10  //Maximum numbers of rows
#define MAX_COLS 10  //Maximum numbers of columns

void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols){
    // Iterate over rows
    for (int i = 0; i < rows; i++){
        // Iterate over columns
        for(int j = 0; j < cols; j++){
            result[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
}


int main(){
    int mat1[MAX_ROWS][MAX_COLS] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int mat2[MAX_ROWS][MAX_COLS] = {{9, 8, 7},
                        {6, 5, 4},
                        {3, 2, 1}};

    int result[MAX_ROWS][MAX_COLS];
    int rows = 3, cols = 3;     // initializing rows and columns

    multiplyMatrices(mat1, mat2, result, rows, cols);

    printf("Result of Matrix Multiply:\n");
    for (int i = 0; i < rows; i++){
        for ( int j = 0; j < cols; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}