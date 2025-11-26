#include <stdio.h>

int main()
{
    float n, i, sum;
    sum = 0;

    printf("Enter n");
    scanf("%f", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        sum = sum + 1 / i;
    }

    printf("sum of series = %f", sum);
}
