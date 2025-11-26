#include<stdio.h>
int main()
{
	int i,j,m,n,a[10][10],b[10][10],c[10][10];
	;
	
	printf("Enter the number of rows and columns of matrix A");
	scanf("%d%d", &m,&n);
	
	printf("Enter the elements of matrix A");
	for (i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Enter the number of rows and columns of matrix B");
	scanf("%d%d", &m,&n);
	
	printf("Enter the elements of matrix B");
	for (i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i][j]==b[i][j])
			{
		      c[i][j]=a[i][j]+b[i][j];
		    }
				
		}
		
	}
            printf("%d",c[i][j]);	
	
	return 0;
}
