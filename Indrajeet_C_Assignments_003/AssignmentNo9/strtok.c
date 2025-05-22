#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "apple,banana,grape";
    char *token = strtok(str, ",");
	while (token != NULL)
	{
    	printf("%s\n", token);
    	token = strtok(NULL, ",");
	}	
}