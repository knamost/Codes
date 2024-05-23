#include <stdio.h>

struct Employee{
    int emp_id;
    char name[30];
    float salary;
};

int main(){
    int n;
    printf("Enter total number of employee: ");
    scanf("%d", &n);
    struct Employee E[n];

    for (int i = 0; i < n; i++){
        printf("Details of Employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &E[i].emp_id);

        printf("Name: ");
        scanf(" %29[^\n]", E[i].name);   // reads upto 29 characters untill next line
        getchar(); // to consume new line

        printf("Salary: ");
        scanf("%f", &E[i].salary);
    }

    printf("Displaying Details of Employees\n");
    for (int i = 0; i < n; i++){
        printf("Details of Employee %d\n", i + 1);
        printf("ID: %d\n", E[i].emp_id);
        printf("Name: %s\n", E[i].name);
        printf("Salary: %.2f\n", E[i].salary);
    }

    int highest_salary_index = 0;
    for (int i = 1; i < n; i++){
        if (E[i].salary > E[highest_salary_index].salary){
            E[highest_salary_index].salary = E[i].salary;
        }
    }
    printf("Employee with Highest Salary is:\n");
    printf("Name: %s\n", E[highest_salary_index].name);
    printf("Id: %d\n", E[highest_salary_index].emp_id);
    printf("Salary: %.2f\n", E[highest_salary_index].salary);

    return 0;
}