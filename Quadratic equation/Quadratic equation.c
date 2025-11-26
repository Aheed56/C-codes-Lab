#include <stdio.h>
int main()
{
	int a,b,c,D;
	float r1,r2;
	printf("Enter the value of a,b,c \n \a");
	scanf("%d%d%d", &a, &b, &c);
	D=b*b-4*a*c;
	if (D>0)
	{
		r1=(-b*b+sqrt(D))/2*a;
		r2=(-b*b-sqrt(D))/2*a;
		printf("The equation has 2 real roots=%f%f \a", r1, r2);
		
	}
	if(D==0)
	{
		r1=(-b*b)/2*a;
		printf("The equation has one root=%f \a", r1 );
	}
	if(D<0)
	{
		printf("The equation has 2 imaginary roots \a");
		return 0;
	}
}
