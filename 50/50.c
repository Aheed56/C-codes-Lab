#include<stdio.h>
int main()
{
	int i,j,m,n,a[10][10];
	
	printf("Enter the number of rows and columns");
	scanf("%d%d", &m,&n);
	
	printf("Enter the elements of matrix");
	for (i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	// To display matrix
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("\t");
			printf("%d \n",a[j][i]);
			
		}
		
	}
	
	return 0;
}
