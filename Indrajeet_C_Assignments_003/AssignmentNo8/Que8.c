//merge two array.
#include<stdio.h>
void main()
{
	int arr[10],brr[5],sum=0;
	printf("Enter the elements in array1:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter the elements in array2:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&brr[i]);
	mergeArray(arr,brr);
}

void mergeArray(int* arr,int* brr)
{
	for(int i=0;i<5;i++)
	arr[i+5]=brr[i];
	printf("Merged array is:\n");
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
}
