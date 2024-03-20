#include<stdio.h>
int main ()
{
int n , sum=0 ,prod=1,i;
printf("Enter your number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    prod=prod*i;
    sum=sum+i;

}
printf("sum of natural no=%d\n",sum);
printf("product of natural no=%d\n",prod);

return 0;
}

