#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("Enter two intervals: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are: ", a, b);

    while (a < b)
    {
        j = 0;

        for(i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                j = 1;
                break;
            }
        }

        if (j == 0)
            printf("%d ", a);

        ++a;
    }

    return 0;
}
