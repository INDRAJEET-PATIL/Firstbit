//Accept array and print only prime numbers in array.
#include<stdio.h>
#include<stdlib.h>
void isPrime(int*,int);
void main()
{
	int n;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	isPrime(arr,n);
}

void isPrime(int* arr,int n)
{
	printf("Prime Numbers:");
	for(int i=0;i<n;i++)
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