#include <stdio.h>

int main(){
    int i, j;
    int mat[3][2] = {{1, 1},
                    {2, 2},
                    {3, 3}};
    
    int sum_row[3];
    int sum_column[2] = {0}; /////////////////hereeee

    for (int i = 0; i < 3; i++){
        sum_row[i] = 0;
        for (int j = 0; j < 2; j++){
            // sum_column[j] = 0;           remove this part ******
            
            sum_row[i] += mat[i][j];
            sum_column[j] += mat[i][j];
        }
    }
    printf("The sum of row:\n");
    for (int i = 0; i< 3; i++){
        printf("Row %d : %d\n", i+1, sum_row[i]);
    }

    for (int j = 0; j < 2; j++){
        printf("Column %d : %d\n", j+1, sum_column[j]);
    }
    return 0;
}