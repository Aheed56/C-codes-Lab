#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("Enter two numbers");
	scanf("%d%d", &x, &y);
	printf("Enter 1 for addition.\n Enter 2 for subtraction.\n Enter 3 for multiplication.\n");
	scanf("%d", &i);
	switch(i)
	{
        case 1:
			z=x+y;
			break;
		case 2:
		    z=x-y;
		    break;
		case 3:
		     z=x*y;
			 break;	
		default:
		printf("You have entered wrong option");
		break;	 
			
	}
	printf("The answer is %d",z);
	
	return 0;
}

