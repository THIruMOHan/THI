#include <stdio.h>

int main(void) 
{
	char st[50];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",st);
	for(i=0;st[i]!='\0';i++)
	{
		count=count+1;
	}
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==' ')
		{
			count=count-1;
		}
	}
	printf("\nthe number of characters in the line are:%d",count);
	return 0;
}
