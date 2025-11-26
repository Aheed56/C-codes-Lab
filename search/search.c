#include <stdio.h>
int main()
{
	int a[100];
	int i,n,x,flag;
	flag=0;
	printf("Enter the size of an array ");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		
	}
	printf("The number to be searched ");
	scanf("%d", &x);
	for (i=0;i<=n-1;i++)
	{
		if(x==a[i])
		{
			printf("The element is at %d",i+1);
			flag=1;
			break;
		}
		
	}
		
		if(flag==0)
		{
			printf("not found");
		}
	
	
	
	return 0;
}
