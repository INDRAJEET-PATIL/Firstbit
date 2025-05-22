//Find sum of all number.
#include<stdio.h>
void main()
{
	int arr[5],sum=0;
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of all elements array is %d",sum);
}
