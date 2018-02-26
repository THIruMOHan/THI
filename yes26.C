#include <stdio.h>

int main(void) 
{
	int arr[10],i,a;
	printf("enter the size of the array:");
	scanf("%d",&a);
	printf("\n enter the array elments:");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n%d %d",arr[i],i);
	}
	return 0;
}
