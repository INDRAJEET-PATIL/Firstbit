//Search the given element in array
#include<stdio.h>
void main()
{
	int arr[5],n,flag=0;
	printf("Enter 5 elements in array:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element do you want to search?:");
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
		if(n==arr[i])
		{
			printf("Number found at %d index",i);
			flag=1;
		}
	}
	if(flag==0)
		printf("Number not found");
	
}