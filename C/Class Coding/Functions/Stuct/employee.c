/* Create a structure "Employee" having name, address, salary, age as members display the name of employees 
having age between 40 and 50 and are living in kathmandu*/

#include <stdio.h>
#include <string.h>

struct Employee{
    char name[50];
    int age;
    char address[50];
    float salary;
};


int main(){
    int count;
    printf("Enter number of employee: ");
    scanf("%d", &count);

    struct Employee e[count];

    for (int i = 0; i < count; i++){
        printf("Enter Details Of Employee %d\n", i + 1);
        printf("Name: ", e[i].name);
        scanf(" %[^\n]", e[i].name);

        printf("Age: ", e[i].age);
        scanf("%d", &e[i].age);
        
        printf("Address: ", e[i].address);
        scanf(" %[^\n]", e[i].address); 

        printf("Salary: ", e[i].salary);
        scanf("%f", &e[i].salary);
        printf("______________________________________\n");
    }


    for ( int i = 0; i < count; i++){
        if ((e[i].age > 40 && e[i].age < 50) && strcmp(e[i].address,"kathmandu") == 0){
            printf("Employee in Kathmandu age between(40 - 50)\n");
            printf("Name: %s\n", e[i].name);
            printf("Age: %d\n", e[i].age);
            printf("Name: %s\n", e[i].address);
            printf("Name: %.2f\n", e[i].salary);
        }
    }
    return 0;
}