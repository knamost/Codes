#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    float salary;
    int emp_id;
};

int main() {
    struct employee e[2]; // Array of 2 employee structs

    // Get employee details
    for (int i = 0; i < 2; i++) {
        printf("Enter name of employee %d\n", i + 1);
        scanf("%s", e[i].name);

        printf("Enter salary of employee %d\n", i + 1);
        scanf("%f", &e[i].salary); // Address-of operator for float

        printf("Enter id of employee %d\n", i + 1);
        scanf("%d", &e[i].emp_id);   // Address-of operator for int
    }
    printf("\n____________________________________");
    // Print employee details
    for (int i = 0; i < 2; i++) {
        printf("\nEmployee %d details\n", i + 1);
        printf("Name = %s\n", e[i].name);
        printf("Salary = %.2f\n", e[i].salary); // Use %.2f for 2 decimal places
        printf("Employee id = %d\n", e[i].emp_id);
    }

    return 0;
}
