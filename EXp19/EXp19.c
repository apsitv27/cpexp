 #include<stdio.h>
struct student
{
char name[20];
int rollno;
int phy,chem,maths,total;
};
int main()
{
struct student s[100],temp;
int n,i,j;
printf("Enter no.of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter details of student:%d:Name,Rollno:",i+1);
scanf("%s %d",s[i].name,&s[i].rollno);
}
for(i=0;i<n;i++)
{
printf("\nEnter Marks of three subjects for Student-%d:Physics,Chemsitry,Maths\n",i+1);
scanf("%d %d %d",&s[i].phy,&s[i].chem,&s[i].maths);
s[i].total=s[i].phy+s[i].chem+s[i].maths;
printf("Total marks are %d",s[i].total);
}
for(i=0;i<n;i++)
{for(j=0;j<n-1;j++)
  { if(s[j].total<s[j+1].total)
    {
    temp=s[j];
    s[j]=s[j+1];
    s[j+1]=temp;
    }
   }
 }
 printf("\n**Student Details*\n\n");
 printf("Rollno\tName\tPhysics\tChemistry\tMaths\tTotal\n");
 printf("_\n\n");
 for(i=0;i<n;i++)
 {printf("%d\t%s \t%d \t%d \t%d\t%d\n",s[i].rollno,s[i].name,s[i].phy,s[i].chem,s[i].maths,s[i].total);}
 return 0;
 }
