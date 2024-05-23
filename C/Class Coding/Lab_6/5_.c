/*
Define a structure called Date with members day, month, and year. Define another structure called Person with members name 
and birth_date of type Date. Write a program to create a Person structure and print its details.
*/

#include <stdio.h>
#include <string.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Person structure
struct Person {
    char name[50];
    struct Date birth_date;
};

int main() {
    struct Person person;

    // Get the person's name
    printf("Enter the person's name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = '\0'; // Remove the newline character

    // Get the person's birth date
    printf("Enter the person's birth date (DD MM YYYY): ");
    scanf("%d %d %d", &person.birth_date.day, &person.birth_date.month, &person.birth_date.year);

    // Print the person's details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Birth Date: %d/%d/%d\n", person.birth_date.day, person.birth_date.month, person.birth_date.year);

    return 0;
}