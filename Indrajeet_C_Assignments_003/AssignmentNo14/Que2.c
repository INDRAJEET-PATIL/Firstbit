#include<stdio.h>
#include<conio.h>	
	typedef struct time{
	int hour;
	int min;
	int sec;
}time;
void validate(time*);
void add(time*);	
void main()
{
	time t;
	printf("Enter hour:");
	scanf("%d",&t.hour);
	printf("Enter min:");
	scanf("%d",&t.min);
	printf("Enter seconds:");
	scanf("%d",&t.sec);
	
	printf("\nBefore calling function Validate:\n");	
	printf("Time= %d hour:",t.hour);
	printf("%d min: ",t.min);
	printf("%d seconds\n",t.sec);
	validate(&t);
	add(&t);
}

void validate(time* t)
{
	if((t->min)>60)
	{
		t->hour=t->hour+((t->min)/60);
		t->min=(t->min)%60;
	}
	if((t->sec)>60)
	{
		t->min=t->min+((t->sec)/60);
		t->sec=(t->sec)%60;
	}
	printf("\nAfter calling function Validate:\n");	
	printf("Time= %d hours:",t->hour);
	printf("%d min:",t->min);
	printf("%d sec\n",t->sec);
}

void add(time* t)
{
	int seconds=(t->hour)*3600+(t->min)*60+t->sec;
	printf("\nTotal seconds: %d ",seconds);
}