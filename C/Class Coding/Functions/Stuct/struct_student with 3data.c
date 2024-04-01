/*Create a structure student with three data memebres st_name, st_id, and st_age.
 Store student name, id and age into the structure and display these values as an output.
*/

#include <stdio.h>
#include <string.h>

struct Student{
    char st_name[50];
    int st_id;
    int st_age;
};

int main(){
    struct Student s[50];    //array to store students
    int n;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    // get student details
    for (int i = 0; i < n; i++){
        printf("\nEnter student name: ");
        scanf("%s", &s[i].st_name);

        printf("\nEnter student age: ");
        scanf("%d", &s[i].st_age);

        printf("\nEnter student id: ");
        scanf("%d", &s[i].st_id);
    }
    
    printf("\n_______________________________________________________________\n");
    //  print student details
    for (int i = 0; i < n; i++){
        printf("Student %s details",s[i].st_name);
        printf("\nName: %s", s[i].st_name);
        printf("\nAge: %d",s[i].st_age);
        printf("\nStudent Id: %d\n", s[i].st_id);
    printf("_______________________________________________________________\n");
    } 
    return 0;
}