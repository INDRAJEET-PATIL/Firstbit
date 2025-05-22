//WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	fflush(stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='$';
		}
	}
	printf("After removing spaces :%s",str);
}