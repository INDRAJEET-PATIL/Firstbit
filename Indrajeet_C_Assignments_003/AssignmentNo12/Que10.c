//assending order sorting array elements..
#include<stdio.h>
#include<stdlib.h>
void sortArray(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	sortArray(arr,n);
	printf("Sorted Elements are:");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
}

void sortArray(int* arr, int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}