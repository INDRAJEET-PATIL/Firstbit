#include<stdio.h>
void main(){

int num=152;
int sum=0,a,rev=0,temp=152;
while(num!=0){
	a=num%10;
	num=num/10;
	sum=sum+a;
	rev=rev*10+a;
}
	if(rev==temp){
		printf("num is palindrome\n");
	}
	else{printf("num is not palindrome\n");
	}
printf("sum of digits =%d",sum);
printf("\nreverse of num is =%d",rev);
}