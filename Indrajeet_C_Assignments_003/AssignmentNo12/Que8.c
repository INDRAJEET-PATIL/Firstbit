//merge two array.
#include<stdio.h>
#include<stdlib.h>
int* mergeArray(int*,int*,int,int );
void main()
{
	int x,y;
	printf("How many elements do you want to enter in array1:");
	scanf("%d",&x);
	int* arr=(int*) malloc(sizeof(int)*x);
	printf("Enter the elements in array1:\n");
	for(int i=0;i<x;i++)
	scanf("%d",&arr[i]);
	printf("How many elements do you want to enter in array1:");
	scanf("%d",&y);
	int* brr=(int*) malloc(sizeof(int)*y);
	printf("\nEnter the elements in array2:\n");
	for(int i=0;i<y;i++)
		scanf("%d",&brr[i]);
	int* c=mergeArray(arr,brr,x,x+y);
	printf("merged array elements are:\n");
	for(int i=0;i<(x+y);i++)
		printf("%d ",c[i]);
	
}

int* mergeArray(int* arr,int* brr,int x,int z)
{
	int* crr=(int*) malloc(sizeof(int)*z);
	for(int i=0;i<x;i++)
	crr[i]=arr[i];
	for(int i=0;i<z;i++)
	crr[i+x]=brr[i];
	return crr;
}
