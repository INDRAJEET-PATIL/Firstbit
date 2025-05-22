//WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int n;
	printf("Enter a string:");
	scanf("%s",&str);
	printf("Enter Index:");
	scanf("%d",&n);
	str[n]=' ';
	printf("After removing character string: %s",str);
}
 