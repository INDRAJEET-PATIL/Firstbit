#include<stdio.h>

typedef struct SalesManager{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;

}SalesManager;

void main(){


SalesManager s1,s2;
  strcpy(s1.name,"Rohit sharma");
printf("s1 name = %s\n",s1.name);
  s1.id=264;
printf("s1 id is = %d\n",s1.id);
    s1.salary=45;
printf("s1 salary is = %d\n",s1.salary);
	s1.incentive=5500;
printf("s1 incentive is = %d\n",s1.incentive);
	s1.target=5;
printf("s1 target is = %d\n",s1.target);

//

printf("Enter the name of s2\n");
scanf("%s",s2.name);
//printf("name of e2 is %s ",e2.name);

printf("\nEnter the id of %s\n",s2.name);
scanf("%d",&s2.id);
//printf("\nmarks of %s is %d",e2.name,e2.marks);

printf("\nEnter the salary of %s\n",s2.name);
scanf("%d",&s2.salary);
//printf("roll_no of %s is %d ",s2.name,s2.roll_no);

printf("\nEnter the incentive of %s\n",s2.name);
scanf("%d",&s2.incentive);

printf("\nEnter the target of %s\n",s2.name);
scanf("%d",&s2.target);	
}