//reverse the given array
#include<stdio.h>
#include<stdlib.h>
int* Reverse(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int* b=Reverse(arr,n);
	printf("Reverse of array is:");
	for(int i=0;i<n;i++)
	printf("%d ",b[i]);
}

int* Reverse(int* arr,int n)
{
	int* brr=(int*) malloc(sizeof(int)*n);
	for(int i=0,j=(n-1);i<n,j>=0;i++,j--)
	{
		brr[i]=arr[j];
	}
	return brr;
}