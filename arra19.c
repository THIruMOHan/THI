#include<stdio.h>
int main()
{
int a[50],i,n,m;
printf("enter the range\n");
scanf("%d",&n);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<n;i++)
{
if(a[i]<m)
{
m=a[i];
}
}
printf("%d\n",m);
return 0;
}
