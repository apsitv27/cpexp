#include<stdio.h>
int main()
{
int number,flag;
int isPrime(int);
printf("Enter Any No");
scanf("%d",& number);
flag=isPrime(number);
if(flag==0)
printf("Prime Number"); 
else
printf("Not Prime");
}
 int isPrime(int n)
  {
   int i,count=0;
  for(i=2;i<=n/2;i++)
   {
    if(n% i==0)
      count++;
    }
   if(count >1)
      return 1;
   else
     return 0;
     } 
      
