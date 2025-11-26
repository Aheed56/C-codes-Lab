#include <stdio.h>
int main()
{
	int n,i,x;
	
	printf("Enter the value of n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		x=pow(2,i);
		printf("%d",x);
	}
	
}

