//assending order sorting array elements..
#include<stdio.h>
void main()
{
	int temp=0;
	int arr[5]={3,6,8,4,5};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
}