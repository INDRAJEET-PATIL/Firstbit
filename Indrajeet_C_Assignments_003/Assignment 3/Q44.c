#include<stdio.h>
void main(){
	
	int n,count=0,i;
	printf("Enter a number= ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
//	printf("%d count",count);
	if(count==2)
	{
		printf(" is a prime number");
	}
	else{
		printf(" is a not prime number");
	}
		
}    
                                                                                                                                       