#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, n;

    printf("Enter the string: ");
    scanf("%s", str);

    /* Printing characters one-by-one until '\0' */
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    printf("\nLength is: %d\n", i);

    n = i;        /* Total length */
    i = 0;
    j = n - 1;

    /* Palindrome check */
    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("Not a palindrome");
            return 0;
        }
