//Write a program to find smallest and largest element in an array.

#include <stdio.h>
int main(){
    
    int arr[] = {25, 11, 7, 75, 56};  // Initializing an array
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculating the length of the array
    int largest = arr[0];   // Assume the first element is the largest
    int smallest = arr[0];  // Assume the first element is the smallest

    // Iterate over the array and update smallest and largest
    for (int i = 1; i < n; i++){
        if ( arr[i] < smallest){
            smallest = arr[i];
        }
        if ( arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("Smallest element in the array: %d\n", smallest);
    printf("Largest element in the array: %d\n", largest);
    
    return 0;
}