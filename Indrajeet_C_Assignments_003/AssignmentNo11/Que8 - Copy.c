//WAP to Calculate the Number of Words Present in a String 
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int count=1;
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	fflush(stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("Number of words in string is %d",count);
}