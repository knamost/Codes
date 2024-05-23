//fibonacci series upto nth term

#include <stdio.h>

int main() {
  int n, first = 0, second = 1, next;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Print first two terms
  printf("%d %d ", first, second);

  // Loop to generate and print remaining terms
  for (int i = 2; i < n; i++) {
    next = first + second;
    printf("%d ", next);
    first = second;
    second = next;
  }

  printf("\n");

  return 0;
}
