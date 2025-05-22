//reverse the given array
#include<stdio.h>
void main()
{
	int arr[5],brr[5],sum=0;
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	Reverse(arr,brr);
}

void Reverse(int* arr,int* brr)
{
	for(int i=0,j=4;i<5,j>=0;i++,j--)
	{
		brr[i]=arr[j];
	}
	printf("Reverse of array is:");
	for(int i=0;i<5;i++)
	printf("%d ",brr[i]);
}