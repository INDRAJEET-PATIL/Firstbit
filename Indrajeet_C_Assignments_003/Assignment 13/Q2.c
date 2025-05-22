#include<stdio.h>

typedef struct Employee{
	 int id;
	char name[20];
	int salary;

}Employee;

void main(){


Employee e1,e2;
  strcpy(e1.name,"Rohitsharma");
printf("e1 name = %s\n",e1.name);
  e1.id=264;
printf("e1 id is = %d\n",e1.id);
    e1.salary=45;
printf("e1 salary is = %d\n",e1.salary);

//
printf("Enter the name of e2\n");
scanf("%s",e2.name);
//printf("name of e2 is %s ",e2.name);

printf("\nEnter the id of %s\n",e2.name);
scanf("%d",&e2.id);
//printf("\nmarks of %s is %d",e2.name,e2.marks);

printf("\nEnter the salary of %s\n",e2.name);
scanf("%d",&e2.salary);
//printf("roll_no of %s is %d ",s2.name,s2.roll_no);

}