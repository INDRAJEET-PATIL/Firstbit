#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20] = "FirstBit";
    char str2[] = "Solutions";
	strcat(str1, str2);
	printf("Concatenated string: %s\n", str1);
}