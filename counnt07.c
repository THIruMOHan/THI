#include<stdio.h>
int main()
{
  int number,count=0;
  printf("\n enter the number");
  scanf("%d",&number);
  while(number>0)
  {
    number=number/10;
    count=count+1
  }
  printf("the numbers are %d",count);
return 0;
}
