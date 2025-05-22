#include<stdio.h>
void main(){
	int num,sum=0,a,rev=0;
	printf("enter a num thats you want to summ and rev:",num);
	scanf("%d",&num);

while(num!=0){
	a=num%10;
	num=num/10;
	sum=sum+a;
	rev=rev*10+a;
}
printf("sum of digits =%d",sum);
printf("\nreverse of num is = %d",rev);
	
	
}