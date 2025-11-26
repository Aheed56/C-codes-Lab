#include <stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("Enter the size of an array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		
	}
	for (i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
	
	
	return 0;
}
