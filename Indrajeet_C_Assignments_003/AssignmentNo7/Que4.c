//Find odd and even among all numbers.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("\nEven Numbers:");
	for(int i=0;i<5;i++)
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
	printf("\nOdd Numbers:");
	for(int i=0;i<5;i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
}