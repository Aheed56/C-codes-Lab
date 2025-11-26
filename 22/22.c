#include <stdio.h>
int main()
{
	int i,n;
	long long int x;
	x=2;
	
	printf("Enter the value of n");
	scanf("%d", &n);
	
	for(i=2;i<=n;i++)
	{
		x=x*x;
		printf("%d ",x);
		
	}
	
		
	
	
}
