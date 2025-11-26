#include <stdio.h>

int main()
{
    int a[100];
    int n, i, x, flag = 0;

    printf("Enter the size of the array");
    scanf("%d", &n);

    printf("Enter the elements of the array");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched");
    scanf("%d", &x);

    for (i = 0; i <= n - 1; i++)
    {
        if (x == a[i])
        {
            printf("Element found at %d", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Not found");
    }

    return 0;
}
