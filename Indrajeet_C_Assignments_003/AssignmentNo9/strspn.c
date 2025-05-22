#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20] = "FirstBit";
	char str2[20] ="FirstName";
	int len = strspn(str1,str2);
    printf("Prefix length: %lu\n", len);
}
