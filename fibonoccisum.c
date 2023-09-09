#include <stdio.h>
int main() {

  int i, n,s=0,sum;
  int a = 0, b = 1;
  int c = a + b;
  printf("Enter the n: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", a, b);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", c);
    s=s+c;
    sum=s+1;
    a = b;
    b = c;
    c = a+b;
  }
   printf("\nthe fibonocci sum=%d",sum);
  return 0;
}

