#include<stdio.h>
int main ()
{
int a ,b ;
int choice;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
printf("1.Addition\n2.substraction\n3.Multiplication\n4.Division\n5.MOdulo\n");
printf("Enter your choice :- ");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("addition of two numbers is %d ", a+b);
    break;
case 2:
    printf("addition of two numbers is %d ", a-b);
    break;
case 3:
    printf("addition of two numbers is %d ", a*b);
    break;
case 4:
    printf("addition of two numbers is %d ", a/b);
    break;
case 6:
    printf("addition of two numbers is %d ", a%b);
    break;

}
return 0;
}

