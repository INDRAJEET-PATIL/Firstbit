#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10] = "Aniket";
    char str2[10] = "Patil";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("str1 is less than str2.\n");
    else
        printf("str1 is greater than str2.\n");
}