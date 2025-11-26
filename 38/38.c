#include <stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("the number of elements");
	for(i=0;i<=n-1;i++)
	{
	
		scanf("%d",&a[i]);
    }
    
	 for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
    

	return 0;
}
