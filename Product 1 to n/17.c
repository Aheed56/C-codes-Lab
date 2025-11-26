#include<stdio.h>
int main()
{
	int i,n,product;
	product=1;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		product=product*i;
	}
	printf("The product is %d",product);
	
	return 0;
	
}
