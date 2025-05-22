#include<stdio.h>

typedef struct Time{
	int hour;
	int min;
	int sec;

}Time;

void main(){


Time t1,t2;

  t1.hour=2;
printf("t1 hour = %d\n",t1.hour);
  t1.min=20;
printf("t1 min = %d\n",t1.min);
    t1.min=20;
printf("t1 sec = %d\n",t1.sec);

//

//printf("name of e2 is %s ",d2.name);
printf("Enter the hour \n");
scanf("%d",&t2.hour);

printf("\nEnter the min \n");
scanf("%d",&t2.min);
//printf("\nmarks of %s is %d",e2.name,e2.marks);

printf("\nEnter the sec\n");
scanf("%d",&t2.sec);
//printf("roll_no of %s is %d ",s2.name,s2.roll_no);

}