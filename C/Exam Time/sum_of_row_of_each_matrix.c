#include <stdio.h>

int main() {
 int matrix[3][2] = {  // Sample 3x2 matrix
   {1, 2},
   {3, 4},
   {5, 6}
 };

 // Loop through each row and calculate the sum
 for (int i = 0; i < 3; i++) {
   int row_sum = 0;
   for (int j = 0; j < 2; j++) {
     row_sum += matrix[i][j];
   }
   printf("Sum of row %d: %d\n", i + 1, row_sum);
 }

 return 0;
}
