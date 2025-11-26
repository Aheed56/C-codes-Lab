#include <stdio.h>

int main()
{
    int x, q, r;

    printf("Enter the number");
    scanf("%d", &x);

    q = x / 10;
    r = x % 10;

    printf("%d %d", r, q);

    return 0;
}
