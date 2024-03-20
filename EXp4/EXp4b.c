#include<stdio.h>
int main ()
{
int a=10 ,b=5, var1 , var2 , var3 ,var4 ,var5 , var6;
var1= a&b;
printf("bitwise AND =%d\n",var1);
var2 = a|b;
printf("bitise OR =%d\n",var2);
var3= a^b;
printf("bitwise EXOR =%d\n",var3);
var4 = ~a;
printf("Bitwise NOT =%d\n",var4);
var5= a<<3;
printf("leftshift =%d\n",var5);
var6=a>>3;
printf("right shift=%d\n", var6);

return 0;
}

         
