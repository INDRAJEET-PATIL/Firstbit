//Find minimum and maximum number in array
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	int G=arr[0];
	int S=arr[0];
	for(int i=0;i<5;i++)
	{
		if(G<arr[i])
		G=arr[i];
		if(S>arr[i])
		S=arr[i];
	}
	printf("Smallest number of the array is %d\n",S);
	printf("Greatest number of the array is %d \n",G);	
}