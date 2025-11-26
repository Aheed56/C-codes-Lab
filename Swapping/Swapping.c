#include <stdio.h>
int main()
{
	int x,y,z;
	printf("Enter two numbers \n \a");
	scanf("%d%d", &x, &y);
	printf("Numbers before swapping are %d and %d", x, y);
	z=x;
	x=y;
	y=z;
	printf("\n \a");
	printf("Numbers after swapping are %d and %d", x, y);
	return 0;
}
