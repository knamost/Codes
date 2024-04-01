#include <stdio.h>
typedef struct Student
{
    char name[50];
    int class;
    char sec;
    int roll_no;
}std;

int main(){
    std s[50];  //array of students
    int count;
    printf("Enter total number of students: ");
    scanf("%d", &count);
    // Getting details from students
    for (int i = 0; i < count; i++)
    {
        printf("_________________________________________________\n");
        printf("Enter your name: ");
        scanf("%s", &s[i].name);
        
        printf("Which class are you in? ");
        scanf("%d", &s[i].class);

        printf("Which section:");
        scanf(" %c", &s[i].sec); // Space before %c to consume whitespace

        printf("Whats your roll no: ");
        scanf("%d", &s[i].roll_no);
    }

    // Printing students information
    for (int i = 0; i < count; i++){
        printf("\n_________________________________________________\n");
        printf(" \nName: %s", s[i].name);
        printf(" \nClass: %d", s[i].class);
        printf(" \nSection: %c", s[i].sec);
        printf(" \nRoll no: %d", s[i].roll_no);
    }

    return 0;
}