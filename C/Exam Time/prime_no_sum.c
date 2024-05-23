#include <stdio.h>

int isPrime(int n){
  if(n < 2){
    return 0;
  }

  for(int i = 2; i*i <= n; i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int n,sum = 0;

  printf("enter a number: \n");
  scanf("%d", &n);

  for(int i = 2; i <= n; i++){
    if(isPrime(i)){
      printf("%d ", i);
      sum += i;
    }
  }
  printf("\nsum = %d\n", sum);
  return 0;
}
