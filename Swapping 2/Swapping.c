#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers \n");
	scanf("%d%d", &x, &y);
	printf("Numbers before swapping are %d and %d",x,y);
	// x=5,y=2
	// x=5-2=3
	// y=3+2=5
	// x=5-3=2
	x=x-y;
	y=x+y;
	x=y-x;
	printf("\n \a");
	printf("Numbers after swapping are %d and %d",x,y);
	
	return 0;
	
	
}
