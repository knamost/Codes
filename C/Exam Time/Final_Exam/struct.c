#include <stdio.h>

struct Student {
    char name[30];
    char id;
    float salary;
}S[10];
int main(){
    int n;
    printf("Enter no of student: \n");
    scanf("%d", &n);

    for ( int i = 0; i < n; i++){
        printf("Details of Employee %d:\n", i+1);
        printf("Name:");
        scanf("%s", S[i].name);

        printf("idtion: ");
        scanf(" %c", S[i].id);

        printf("salary: ");
        scanf("%.2f", &S[i].salary);

    }


    return 0;
}