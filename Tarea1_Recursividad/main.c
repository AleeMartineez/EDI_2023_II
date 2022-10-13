#include <stdio.h>

int fibonacci(int n);

int main() {
  int num;

  printf("Dame el numero de elemtos del fibonacci: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++ ){
    printf("%d, ", fibonacci(i));
  }
}

int fibonacci( int n){
  if ( n == 0 || n == 1 ){
    return n;
  } else {
    return (fibonacci (n - 1) + fibonacci(n - 2));
  }
}

