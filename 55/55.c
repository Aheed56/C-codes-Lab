#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers \n \a");
	scanf("%d%d", &a, &b);
	
     c=add(a,b);
     printf("%d",c);
} 
 int add(int x,int y)
{
	int z;
	z=x+y;
	
	return z;
}
	
	

