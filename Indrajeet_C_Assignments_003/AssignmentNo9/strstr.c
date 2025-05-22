#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20] = "FirstBit Solutions";
    char str2[] = "Solutions";

    char *ptr = strstr(str1, str2);

    if (*ptr != '\0')
        printf("Substring found at position: %ld\n", ptr-str1);
    else
        printf("Substring not found.\n");
}