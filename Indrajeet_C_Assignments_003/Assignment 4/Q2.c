//prime number
#include<stdio.h>
void main(){
	
	int count,i,start,fn=1,n;
	printf("enter number to get prime in range");
	scanf("%d",&n);
	for(start=fn;start<=n;start++){
		count=0;
		for(i=1;i<=start;i++){
			if(start%i==0)
			count++;
		}
		if(count==2){
			printf("%d\n",start);
		}
	}
	
}