#include<stdio.h>
int main()
{
printf("USE OF CONTINUE STATEMENT \n \n");
for(int i=0; i<10; i++)
{
    if(i==4)
    {
        break;
    }
    printf("i=%d\n",i);
}
return 0;
}
