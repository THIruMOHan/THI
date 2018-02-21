#include <stdio.h>
int main() 
{
    int n,a[10],b=0,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               b=a[i];
               a[i]=a[j];
               a[j]=b;
           }
       }
    }
   
     if(n%2==0)
     {
         printf("%d\n",(a[n/2]+a[(n/2)-1])/2);
     }
     else
     {
         printf("%d\n",a[(n-1)/2]);
     }
	return 0;
}
