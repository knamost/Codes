#include <stdio.h>
int main(){
    int matA[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
    
    int matB[2][3] = {{1, 2, 3},
                    {4, 5, 6}};

    int row = 2;
    int col = 3;
    int sum[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("sum of matrix is:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}