//add two array.
#include<stdio.h>
#include<stdlib.h>
int* addArray(int*,int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array1:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int* brr=(int*) malloc(sizeof(int)*n);
	printf("\nEnter the elements in array2:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&brr[i]);
	int* c=addArray(arr,brr,n);
	printf("Sum of two array elements are:\n");
	for(int i=0;i<n;i++)
		printf("%d ",c[i]);
	
}

int* addArray(int* arr,int* brr, int n)
{
	int* crr=(int*) malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		crr[i]=arr[i]+brr[i];
		return crr;
}
