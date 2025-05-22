//Search the given element in array
#include<stdio.h>
void searchElement(int*);
void main()
{
	int arr[5];
	printf("Enter 5 elements in array:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	searchElement(arr);
}

void searchElement(int* arr)
{
	int n,flag=0;
	printf("Enter the element do you want to search?:");
	scanf("%d",&n);
		for(int i=0;i<5;i++)
		{
			if(n==arr[i]){
			printf("Number found at %d index",i);
			flag=1;
			}
		}
		if(flag==0)
		printf("Number not found");
}