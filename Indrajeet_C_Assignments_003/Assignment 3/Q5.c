#include<stdio.h>
void main()
{
int r,s=0,count=0,tc,power=1,num;

printf("enter the no. to check armstrong or not:",num);
scanf("%d",&num);
int temp=num;
while(temp!=0){
	count++;
	temp=temp/10;
}
temp=num;
while(temp!=0){
	power=1;
	tc=count;
	r=temp%10;
	while(tc!=0)
	{
		power=power*r;
		tc--;
	}
	s=s+power;
	temp=temp/10;
}

if(num==s){
	printf("armstrong");
}
else{
	printf("not armstrong");
}
}
