#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    fprintf(fptr, "Hello World");
    fclose(fptr);

    

    return 0;
}