//WAP to Form a New String where the First Character and the Last Character have been Exchanged 
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("Enter a string:");
	scanf("%s",&str1);
	strcpy(str2,str1);
	int l=strlen(str1);
	str2[0]=str1[l-1];
	str2[l-1]=str1[0];
	printf("After exchanging character string: %s",str2);
}
 