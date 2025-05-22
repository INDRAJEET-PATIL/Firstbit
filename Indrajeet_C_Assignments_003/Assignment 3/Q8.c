#include<stdio.h>
void main(){
	int n,sum,i,rem,fact=1;
	printf("Enter a  number= ");
	scanf("%d",&n);
	int temp=n;
	
	while(n>0){
	rem=n%10;
	fact=1;	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	sum=sum+fact;
	n=n/10;
}
if(sum==temp){
	printf("Number is strong num\n",temp);
}
else
{printf(" number is not strong ");
}
	printf("Factorial of %d = %d",n,fact);	
}