//Find minimum and maximum number in array
#include<stdio.h>
#include<stdlib.h>
void minmax(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	minmax(arr,n);
}

void minmax(int* arr,int n)
{           
	int S=arr[0];
	int G=arr[0];
	for(int i=0;i<n;i++)
	{
		if(G<arr[i])
		G=arr[i];
		if(S>arr[i])
		S=arr[i];
	}
 
	printf("Smallest number of the array is %d\n",S);
	printf("Greatest number of the array is %d \n",G);
}