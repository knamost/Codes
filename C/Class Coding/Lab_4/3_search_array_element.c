// Write a program to search for an element input by the user within an array.

#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};  // Initializing an array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculating the length of the array
    int searchElement, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Iterate over the array and check if the element is present
    for ( int i = 0; i < n; i++){
        if ( arr[i] == searchElement){
            printf("Element %d found at index %d\n", searchElement, i);
            found = 1;
            break;
        }
    }

//   if the found flag is still 0, we print a message indicating that the element is not found in the array.
    if(!found){ 
        printf("Element %d not found in array\n", searchElement);
    }

    return 0;
}