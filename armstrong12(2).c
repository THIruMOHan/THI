#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, temp1, temp2, c, n = 0, d = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &a, &b);
    printf("Armstrong numbers between %d an %d are: ", a, b);

    for(i = a + 1; i < b; ++i)
    {
        temp2 = i;
        temp1 = i;

    
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

     
        while (temp2 != 0)
        {
            c = temp2 % 10;
            d += pow(c, n);
            temp2 /= 10;
        }

       
        if (d == i) {
            printf("%d ", i);
        }

        
        n = 0;
        d = 0;

    }
    return 0;
}
