//wap to check whether the diagonal elements of a (4*4) matrix are all zero.

#include <stdio.h>
#include <stdio.h>

int main() {
 int matrix[4][4] = {  // Sample 4x4 matrix
   {1, 2, 3, 4},
   {5, 0, 7, 8},
   {9, 10, 0, 12},
   {13, 14, 15, 0}
 };

 // Check if all diagonal elements are zero
 int all_zeros = 1;  // Assume all zeros initially
 for (int i = 0; i < 4; i++) {
   if (matrix[i][i] != 0) {
     all_zeros = 0;  // Found a non-zero diagonal element
     break;          // No need to continue checking
   }
 }

 if (all_zeros) {
   printf("All diagonal elements are zero.\n");
 } else {
   printf("Not all diagonal elements are zero.\n");
 }

 return 0;
}
