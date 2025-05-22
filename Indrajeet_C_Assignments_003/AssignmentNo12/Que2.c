//Search the given element in array
#include<stdio.h>
#include<stdlib.h>
void searchElement(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	searchElement(arr,n);
}

void searchElement(int* arr,int n)
{
	int z,flag=0;
	printf("Enter the element do you want to search?:");
	scanf("%d",&z);
		for(int i=0;i<n;i++)
		{
			if(z==arr[i]){
			printf("Number found at %d index",i);
			flag=1;
			}
		}
		if(flag==0)
		printf("Number not found");
}