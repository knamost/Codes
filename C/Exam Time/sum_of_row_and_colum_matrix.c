#include <stdio.h>

int main() {
  int matrix[3][2] = {  // Sample 3x2 matrix
    {1, 2},
    {3, 4},
    {5, 6}
  };

  // Variables to store row and column sums
  int row_sums[3] = {0};
  int column_sums[2] = {0};

  // Loop through each row and calculate sum
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      row_sums[i] += matrix[i][j];  // Add to row sum
      column_sums[j] += matrix[i][j]; // Add to column sum
    }
    printf("Sum of row %d: %d\n", i + 1, row_sums[i]);
  }

  // Print column sums
  printf("\nSum of column 1: %d\n", column_sums[0]);
  printf("Sum of column 2: %d\n", column_sums[1]);

  return 0;
}
