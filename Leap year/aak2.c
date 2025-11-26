#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("Enter two numbers");
	scanf("%d%d ", &x, &y);
	printf("Enter 1 for addition.\n Enter 2 for subtraction.\n Enter 3 for multiplication.");
	scanf("%d", &i);
	switch(i)
	{
        Case 1:
			Z=x+y;
			break;
		Case 2:
		    z=x-y;
		    break;
		Case 3:
		     z=x*y;
			 break;	
		default:
		printf("You have entered wrong option");
		break;	 
			
	}
	printf("The answer is %d",z);
	
	return 0;
}
