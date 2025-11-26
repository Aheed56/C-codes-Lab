#include<std.io>
int main()
{
	int x,y;
	printf("Enter two numbers \n ");
	scanf("%d%D", &x, &y)
	if(x>y)
	{
		printf("%d is greater than %d",x,y);
	}
	else if (y>x)
	{
		printf("%d is greater than %d", &y, &x);
	}
	else
	{
		printf("Both are equal");
	}
	return 0;
	
}
