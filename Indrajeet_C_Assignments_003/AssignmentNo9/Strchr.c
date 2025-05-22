#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "FirstBitSolutions";
    char ch = 'l';
	char *ptr = strchr(str, ch);
	if (*ptr != '\0')
        printf("First occurrence of '%c' is at position: %ld\n", ch, ptr-str);
    else
        printf("Character not found.\n");
}