#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int r1,c1,r2,c2;
int i,j,k, sum=0;
printf("Enter No. Of Rows And Columns For First Matrix: ");
scanf("%d%d",&r1,&c1);
printf("Enter No. Of Rows Amd Columns For Second Matrix: ");
scanf("%d%d", &r2,&c2);
if(c1!=r2)
{
printf("Multiplication Cant Be Performed: ");
exit(0);
}
printf("Enter First Matrix Element: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d", &a[i][j]);
}
}
printf("Enter Second Matrix Element: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d", &b[i][j]);
}
}
printf("First Matrix Element: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("Second Matrix Element: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t", b[i][j]);
}
printf("\n");
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
sum=0;
for(k=0;k<c1;k++)
{
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}
}
printf("Matrix Multiplication:\n");
printf("Matrix c:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}