#include<stdio.h>
int main()
{
int a,b=0,c,d;
printf("enter the number");
scanf("%d",&a)
d=a;
while(a!=0)
{
c=a%10
b=b*10+c;
a/=10;
}
if(d==b)
{
printf("\n %d is a palindrome",d);
}
else
{
printf("\n%d is not a palindrome",d);
}
return 0;
}
