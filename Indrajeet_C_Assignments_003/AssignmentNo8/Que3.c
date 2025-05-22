//Find sum of all number.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	sum(arr);
}

void sum(int* arr)
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of all elements array is %d",sum);
}