//Write a program to scan string from user then scan a single character and search it in a accepted string. 
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20], n;
	int flag=0;
	printf("Enter a string:");
	scanf("%s",&str);
	fflush(stdin);
	printf("Enter a character do you want to search:");
	scanf("%c",&n);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==n)
		{
			printf("Character found at %d index.",i);
			flag=1;
		}
	}
	if(flag==0)
		printf("Character not found");
}
