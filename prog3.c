#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[100];
	
	printf("Enter String: ");
	gets(str);
	
	strrev(str);
	
	printf("Reverce String is %s.",str);
	
	return 0;
}
