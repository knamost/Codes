#include <stdio.h>

int main() {
  int matrix[2][3];  // Array to store the original matrix
  int transpose[3][2];  // Array to store the transpose matrix

  // Read values from the user for the original matrix
  printf("Enter elements of the 2x3 matrix:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Transpose the matrix
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      transpose[j][i] = matrix[i][j];
    }
  }

  // Print the original matrix
  printf("\nOriginal matrix:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // Print the transpose matrix
  printf("\nTranspose matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
