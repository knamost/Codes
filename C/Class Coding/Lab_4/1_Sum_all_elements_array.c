//Write a program to find sum of all elements in an array.

#include <stdio.h>
int main(){

    int arr[] = {10, 20, 30, 40, 50};  // Initializing an array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculating the length of the array
    int sum = 0;
/*
Note:  We calculate the length of the array using the expression sizeof(arr) / sizeof(arr[0]).
This works because sizeof(arr) gives the total size of the array in bytes, and sizeof(arr[0]) gives
the size of a single element in bytes.
*/

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
        printf("Sum of all elements in the array: %d\n", sum);
return 0;
}