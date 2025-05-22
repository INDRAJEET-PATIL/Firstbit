//add two array.
#include<stdio.h>
void main()
{
	int arr[5],brr[5],crr[5],sum=0;
	printf("Enter the elements in array1:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter the elements in array2:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&brr[i]);
	
	addArray(arr,brr,crr);
}

void addArray(int* arr,int* brr, int* crr)
{
	for(int i=0;i<5;i++)
		crr[i]=arr[i]+brr[i];
	printf("Sum of two array elements are:\n");
	for(int i=0;i<5;i++)
		printf("%d ",crr[i]);
}
