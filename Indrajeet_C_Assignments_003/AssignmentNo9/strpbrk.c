#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20] = "FirstBit";
	char str2[20] ="Solutions";
	char *ptr = strpbrk(str1, str2);
	if (ptr!='\0')
        printf("First match found: %c\n", *ptr);
    else
        printf("No match found.\n");
}
