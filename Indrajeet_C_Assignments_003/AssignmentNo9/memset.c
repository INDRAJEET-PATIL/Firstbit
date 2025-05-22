#include<stdio.h>
#include<string.h>
void main()
{
	char str[20] = "FirstBitSolutions";
	memset(str, '#', 5);  // Replace first 5 characters with '#'
	printf("Modified string: %s\n", str);
}