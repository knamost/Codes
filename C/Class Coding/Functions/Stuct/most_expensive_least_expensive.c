#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];

    // Input book details
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Enter Book's Title: ");
        scanf("%s", books[i].title);

        printf("What's the author's name: ");
        scanf("%s", books[i].author);

        printf("Price of Book: ");
        scanf(" %f", &books[i].price);  // Space before %f to consume whitespace
    }

    // Find most expensive and least expensive books
    int mostExpensive = 0, leastExpensive = 0;
    for (int i = 1; i < 3; i++) {
        if (books[i].price > books[mostExpensive].price) {
            mostExpensive = i;
        } else if (books[i].price < books[leastExpensive].price) {
            leastExpensive = i;
        }
    }

    // Display results
    printf("\nMost Expensive Book Details:\n");
    printf("Title: %s\n", books[mostExpensive].title);
    printf("Author: %s\n", books[mostExpensive].author);
    printf("Price: %.2f\n", books[mostExpensive].price); // Use %.2f for formatted float output

    printf("\nLeast Expensive Book Details:\n");
    printf("Title: %s\n", books[leastExpensive].title);
    printf("Author: %s\n", books[leastExpensive].author);
    printf("Price: %.2f\n", books[leastExpensive].price); // Use %.2f for formatted float output

    return 0;
}


// Greek question mark ;