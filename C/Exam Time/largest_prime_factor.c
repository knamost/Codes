#include <stdio.h>

int is_prime(long long n) {  // Use long long to accommodate large numbers
  if (n <= 1) {
    return 0;
  }
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int largest_prime_factor(long long n) {
  if (n <= 1) {
    return 1;
  }
  int largest_factor = 1;
  while (n % 2 == 0) {
    largest_factor = 2;
    n >>= 1;
  }
  for (long long i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      largest_factor = i;
      n /= i;
    }
  }
  if (n > 1) {
    largest_factor = n;
  }
  return largest_factor;
}

int main() {
  long long number = 600851475143;  // Predefine the number
  int largest_prime = largest_prime_factor(number);
  printf("The largest prime factor of %lld is: %d\n", number, largest_prime);
  return 0;
}
