
#include<stdio.h>
int main()
{
	int i,n,a,b,c;
	printf("Enter the value of n");
	scanf("%d", &n);
	
	a=0;
	b=1;
	printf("%d %d",a,b);
	
	for(i=3;i<=n;i++)
	{
		c=a+b;
		
	printf(" %d ",c);
	
	    a=b;
	    b=c;
}
	return 0;
	
}
