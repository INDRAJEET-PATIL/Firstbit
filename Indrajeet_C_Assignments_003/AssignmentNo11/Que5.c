//WAP to Count the Number of Vowels in a String
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int count=0;
	printf("Enter a string:");
	scanf("%s",&str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
	}
	printf("Number of vowels are: %d",count);
}