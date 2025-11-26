#include<stdio.h>
int main ()
{ 
   int a,b,c,D;
   float r1,r2;
   printf("enter the values of a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   D=b*b-4*a*c;
   if(D>0)
   {
   	r1=-b+sqrt((D))/(2*a);
   	r2=-b-sqrt((D))/(2*a);
   	printf("the equation has two real roots=%f & %f", r1,r2);
   }
   if (D=0)
   {
   	printf("roots are equal");
   	r1=-b/(2*a);
   	printf("the equation has only one root=%f",r1);
   }
   if (D<0)
   {
   	printf("equation has imaginary roots");
   	
   }
   	return 0;
}
