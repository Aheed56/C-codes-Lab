#include <stdio.h>
int main()
{
	float x;
	printf("Enter a number \n");
	scanf("%f", &x);
	if(x>0)
	{
		printf("%f is positive", x);
	}
	else
	{
		printf("%f is negative", x);
	}
	return 0;
}
