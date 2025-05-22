// perfect number in 1 to 50
#include<stdio.h>

void main(){

int s,i,n;
printf("enter the n num :");
scanf("%d",&n);
for(i=1;i<=n;i++){
	s=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		{
		s=s+j;
		}
	}
if(s==i)
{printf("%d\n",i);
}
}
}