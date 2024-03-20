#include<stdio.h>
int main ()
{
int n , rem , sum=0 ,prod=1;
printf("Enter any number ");
scanf("%d", &n);
while (n>0)
{
    rem=n%10;
    sum=sum+rem;
    prod=prod*rem;
    n=n/10;
}
printf("sum of numbers= %d\n",sum);
printf("product of numbers is= %d ",prod);
return 0;
}

