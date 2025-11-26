#include<stdio.h>
int main()
{
	int n,i;
	char str[100];
	printf("Enter your string");
	scanf("%s",&str);
	while(str[i]!='\0')
	 {
	 	printf("%c",str[i]);
	 	i++;
	 }
     
	 
	return 0;


}

