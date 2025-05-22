//Write a program to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],str2[20];
	printf("Enter a string:");
	scanf("%s",&str);
	strcpy(str2,str);
	strrev(str2);
	if(strcmp(str,str2)==0)
	printf("String is palindrome");
	else
	printf("String is not palindrome");
}
	