#include<stdio.h>
int main ()
{
int n, rem, rev=0,temp;
printf("Enter a number:-");
scanf("%d",&n);
do
{
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
  
} while (n>0);
printf("Reverse of number is %d\n",rev);


return 0;
}

