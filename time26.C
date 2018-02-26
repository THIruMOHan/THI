#include <stdio.h>

int main(void) 
{
	int min,hrs,mins,sec=00;
	printf("enter the time in minutes:");
	scanf("%d",&min);
	hrs=min/60;
	mins=min%60;
	if(mins>60)
	{
		sec=mins%60;
		mins=mins-sec;
	}
	printf("%d %d %d",hrs,mins,sec);
	return 0;
}
