#include <stdio.h>
int main(){
    int arr[] = {1, 50, 20, 10, 51, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum +=arr[i];
    }
    printf("Sum of all elements in array: %d\n", sum);

    int maxPrice = arr[0];
    int minPrice = arr[0]; 

    for (int i = 1; i < n; i++){
        if (arr[i] < minPrice){
            minPrice = arr[i];
        }
        if (arr[i] > maxPrice){
            maxPrice = arr[i];
        }
    }

    printf("smallest element: %d\n", minPrice);
    printf("Largest element: %d\n", maxPrice);

    int searchE, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &searchE);

    for ( int i = 0; i < n; i++){
        if (arr[i] == searchE){
            printf("Element %d is found at index %d\n", searchE, i);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Element %d not found in array", searchE);   
    }

    return 0;
}