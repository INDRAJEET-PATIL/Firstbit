//Find sum of all number.
#include<stdio.h>
#include<stdlib.h>
void sum(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	sum(arr,n);
}

void sum(int* arr,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of all elements array is %d",sum);
}