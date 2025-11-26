#include <stdio.h>
int main()
{
	int x;
	printf("Enter a number \n \a");
	scanf("%d", &x);
	if(x%2==0)
	{
		printf("%d is even \a", x);
	}
	else
	{
		printf("%d is odd \a", x);
	}
	return 0;
}
