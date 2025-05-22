//assending order sorting array elements..
#include<stdio.h>
void main()
{
	int arr[5],brr[5],sum=0;
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	sortArray(arr,brr);
}

void sortArray(int* arr, int* brr)
{
	int temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted Elements are:");
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
}