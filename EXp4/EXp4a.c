#include<stdio.h>
int main ()
{
int a=10, b=5 , logical_AND , logical_OR , logical_NOT ;
logical_AND =(a>=10) && (b>5);
printf("logical AND output =%d\n", logical_AND);
logical_OR =(a==10) || (b>a);
printf("logicaal OR output =%d\n", logical_OR);
logical_NOT= !((a>=10) || (b==a));
printf("logical NOT output =%d\n",logical_NOT);
 
return 0;
}

