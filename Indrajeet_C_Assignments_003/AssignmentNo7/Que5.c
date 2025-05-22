//Print alternate elements in array.
#include<stdio.h>
void main()
{
	int arr[5],sum=0;
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("\nAlternate Elements:");
	for(int i=0;i<5;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}
