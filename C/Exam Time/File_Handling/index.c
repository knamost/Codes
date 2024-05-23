#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    FILE *fptr;
    fptr = fopen("text.txt", "r+");

    if (fptr == NULL){
        printf("Error!");
        exit(1);
    }

    fscanf(fptr, "%d", &num);
    printf("The value of n = %d", num);
    fclose(fptr);   
    return 0;
}   
