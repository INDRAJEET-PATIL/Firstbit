#include<stdio.h>

typedef struct Date{
	int date;
	char month[10];
	int year;

}date;

void main(){


date d1,d2;

  d1.date=26;
printf("d1 date = %d\n",d1.date);
  strcpy(d1.month,"june");
printf("d1 month = %s\n",d1.month);
    d1.year=2045;
printf("d1 year = %d\n",d1.year);

//

//printf("name of e2 is %s ",d2.name);
printf("Enter the date \n");
scanf("%d",&d2.date);

printf("\nEnter the month \n");
scanf("%s",d2.month);
//printf("\nmarks of %s is %d",e2.name,e2.marks);

printf("\nEnter the year\n");
scanf("%d",&d2.year);
//printf("roll_no of %s is %d ",s2.name,s2.roll_no);

}