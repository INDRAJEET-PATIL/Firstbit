//Find odd and even among all numbers.
#include<stdio.h>
#include<stdlib.h>
void evenOdd(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	evenOdd(arr,n);
}

void evenOdd(int* arr,int n)
{
	printf("\nEven Numbers:");
		for(int i=0;i<n;i++)
			if(arr[i]%2==0)
				printf("%d ",arr[i]);
	printf("\nOdd Numbers:");
	for(int i=0;i<n;i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
}