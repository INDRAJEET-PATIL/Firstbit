#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20] = "FirstBit";
    char str2[] = "Solutions";
	strncat(str1, str2,5);
	printf("Concatenated string: %s\n", str1);
}