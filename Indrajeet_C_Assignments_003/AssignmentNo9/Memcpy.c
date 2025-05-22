#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20] = "FirstBitSolutions";
	char str2[20] ;
	memcpy(str2,str1, strlen(str1) + 1);  // +1 to include the null terminator

    printf("Copied data: %s\n", str2);
}