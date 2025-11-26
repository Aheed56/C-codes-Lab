#include <stdio.h>

int main()
{
    int i, n;
    long long int x = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%lld ", x);
        x = x * x;
    }

    return 0;
}

