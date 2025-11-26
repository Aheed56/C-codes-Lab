#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers \n \a");
	scanf("%d%d", &x, &y);
	printf("Numbers before swapping are %d and %d \n", x, y);

	swap(x,y);
} void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	
	printf("Numbers after swapping are %d and %d \n",x,y);
	
}
