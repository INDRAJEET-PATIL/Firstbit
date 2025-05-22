#include<stdio.h>
#include<string.h>
typedef struct book{
	char bname[20];
	int id;
	char authorName[20];
	int price;
}book;
void main()
{
	book b;
	printf("Enter book name,id,author name and price of book:\n");
	scanf("%s",&b.bname);
	scanf("%d",&b.id);
	scanf("%s",&b.authorName);
	scanf("%d",&b.price);
	printf("Book name:%s \n",b.bname);
	printf("Book Id:%d \n",b.id);
	printf("Author name:%s \n",b.authorName);
	printf("Price:%d \n",b.price);
}