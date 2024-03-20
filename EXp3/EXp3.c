#include<stdio.h>
int main ()
{
int num1,num2;
float result;
printf("Enter First number:- "),scanf("%d",&num1);
printf("Enter second number:- "),scanf("%d",&num2);
result=num1+num2;
printf("Addition of two numbers is:-  %.0f \n", result);
result=num1-num2;
printf("Substraction of two numbers is:-  %.0f \n", result);
result=num1*num2;
printf("Multiplication of two numbers is:-  %.0f \n", result);
result=num1/num2;
printf("division of two numbers is:-  %.2f \n ", result);
result= (float) num1/num2;
printf("Division(float)=%.2f\n ",result); //typecasting


return 0;
}

