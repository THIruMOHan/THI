#include<stdio.h>
int main()
{
int a,i;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=5;i++)
{
a=a*i;
printf("%d",a);
printf("\t");
a=5;
}
return 0;
}
