/* Create a structure named Book to store book details (i.e: title, author, and price). Wtite a C program to input details
of three books, find most expensive and the lowest priced books and display their information. 
*/

#include <stdio.h>

struct book{
    char title[50];
    char author[50];
    float price;
};

int main(){

        struct book books[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Enter Book's Title: ");
        scanf("%s", &books[i].title);

        printf("What's author name: ");
        scanf("%s", &books[i].author);

        printf("Price of Book: ");
        scanf(" %f", &books[i].price);  //space before float
    }

    for (int i = 0; i < 3; i++){
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %f\n", books[i].price);
    }

    int mostE = 0, leastE = 0; // where mostE: most expensive, l: least expensive

    for (int i = 1; i < 3; i++){
        if ( books[i].price > books[mostE].price ) {
            mostE = i;
        }else if (books[i].price > books[leastE].price)
        {
            leastE = i;
        }
    }



    return 0;
}