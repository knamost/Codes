// // Write a program to add two matrices.

// #include <stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows and columns (for both matrices): ");
//     scanf("%d %d", &rows, &cols);

//     int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

//     printf("Enter elements of matrix 1:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("Enter elements of matrix 2:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // Add corresponding elements of matrices
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             sum[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     printf("Sum of the matrices:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }





#include <stdio.h>
#define MAX_ROWS 10  //Maximum numbers of rows
#define MAX_COLS 10  //Maximum numbers of columns

void addMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int sum[MAX_ROWS][MAX_COLS], int rows, int cols){
    // Iterate over rows
    for (int i = 0; i < rows; i++){
        // Iterate over columns
        for(int j = 0; j < cols; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
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

    int sum[MAX_ROWS][MAX_COLS];
    int rows = 3, cols = 3;     // initializing rows and columns

    addMatrices(mat1, mat2, sum, rows, cols);

    printf("Result of Matrix addition:\n");
    for (int i = 0; i < rows; i++){
        for ( int j = 0; j < cols; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}