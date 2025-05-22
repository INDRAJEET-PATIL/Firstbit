//Accept array and print only prime numbers in array.
#include<stdio.h>
void main()
{
	int arr[5],sum=0;
	printf("Enter the elements in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	isPrime(arr);
}

void isPrime(int* arr)
{
	printf("Prime Numbers:");
	for(int i=0;i<5;i++)
	{
		int num=arr[i];
		int flag=0;
		for(int j=2;j<num;j++)
		{
			if(num%j==0)
				flag=1;
		}
		if(flag==0)
		printf("%d ",arr[i]);	
	}
}