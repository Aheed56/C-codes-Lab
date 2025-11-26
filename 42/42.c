#include <stdio.h>
int main()
{
	int a[100];
	int i,n,sum;
	sum=0;
	printf("Enter the size of an array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		
	}
	for (i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum is %d",sum);

	
	
	return 0;
}
