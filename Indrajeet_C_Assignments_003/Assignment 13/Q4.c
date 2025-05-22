#include<stdio.h>

typedef struct HR{
	int id;
	char name[20];
	int salary;
	int Commission;

}HR;

void main(){


HR h1,h2;
  strcpy(h1.name,"Rohit sharma");
printf("h1 name = %s\n",h1.name);
  h1.id=264;
printf("h1 id is = %d\n",h1.id);
    h1.salary=45;
printf("h1 salary is = %d\n",h1.salary);
	h1.Commission=100;
printf("h1 Commission is = %d\n",h1.Commission);

printf("Enter the name of h2\n");
scanf("%s",h2.name);
//printf("name of e2 is %s ",e2.name);

printf("\nEnter the id of %s\n",h2.name);
scanf("%d",&h2.id);
//printf("\nmarks of %s is %d",e2.name,e2.marks);

printf("\nEnter the salary of %s\n",h2.name);
scanf("%d",&h2.salary);
//printf("roll_no of %s is %d ",s2.name,s2.roll_no);

printf("\nEnter the Commission of %s\n",h2.name);
scanf("%d",&h2.Commission);

	
}