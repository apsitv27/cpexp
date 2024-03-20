#include <stdio.h>

int fibonacci(int n) {
   
   if(n == 1 || n==2)
      return 1;
   else
      return (fibonacci(n-1) + fibonacci(n-2));
}

int main() {
    int fibonacci(int);
   int n;

   printf("Enter the number of terms:-");
   scanf("%d", &n);

   printf("Value of %d term=%d",n,fibonacci(n));
   return 0;
}
