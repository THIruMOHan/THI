#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long j = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            j*= i;             
        }
        printf("Factorial of %d = %llu", n, j);
    }

    return 0;
}
