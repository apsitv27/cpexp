#include<stdio.h>
int main()
{
void swap(int * ,int *);
int a ,b;
printf("Enter value of a :");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
printf("Before swapping:- a=%d, b=%d\n",a,b);
swap(&a,&b);
printf("After swapping:- a=%d ,b=%d",a,b);
return 0;
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}