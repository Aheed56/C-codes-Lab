#include<stdio.h>
int main()
{
	int i,n,product;
	product=1;
	printf("Enter the number \n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		product=product*i;
	}
	printf("The factorial is %d",product);
	
	return 0;
	
}
