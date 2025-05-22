#include<stdio.h>

typedef struct Admin{
	int id;
	char name[20];
	int salary;
	int Allowance;

}Admin;

void main(){


Admin a1,a2;
  strcpy(a1.name,"Rohit sharma");
printf("a1 name = %s\n",a1.name);
  a1.id=264;
printf("a1 id is = %d\n",a1.id);
    a1.salary=45;
printf("a1 salary is = %d\n",a1.salary);
	a1.Allowance=100;
printf("a1 Allowance is = %d\n",a1.Allowance);

printf("Enter the name of a2\n");
scanf("%s",a2.name);
//printf("name of e2 is %s ",e2.name);

printf("\nEnter the id of %s\n",a2.name);
scanf("%d",&a2.id);
//printf("\nmarks of %s is %d",e2.name,e2.marks);

printf("\nEnter the salary of %s\n",a2.name);
scanf("%d",&a2.salary);
//printf("roll_no of %s is %d ",s2.name,s2.roll_no);

printf("\nEnter the Allowance of %s\n",a2.name);
scanf("%d",&a2.Allowance);

	
}