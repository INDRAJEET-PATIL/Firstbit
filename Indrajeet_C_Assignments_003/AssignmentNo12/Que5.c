//Print alternate elements in array.
#include<stdio.h>
#include<stdlib.h>
void Alternate(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	Alternate(arr,n);
}

void Alternate(int* arr,int n)
{
	printf("\nAlternate Elements:");
	for(int i=0;i<n;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}
