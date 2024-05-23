#include <stdio.h>
int main(){
    int a[2][3];

    printf("Enter 2*3 matrix elements: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            a[j][i];
        }
    }

    printf("Original Matrix: \n");
    for(int  i = 0; i < 2; i++ ){
        for(int j = 0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    printf("Transpose Matrix: \n");
    for(int  i = 0; i < 3; i++ ){
        for(int j = 0; j<2; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }





    return 0;
}
