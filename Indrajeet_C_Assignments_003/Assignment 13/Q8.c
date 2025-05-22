#include<stdio.h>

typedef struct Distance{
	int feet;
	float inch;


}Distance;

void main(){


Distance d1,d2;

  d1.feet=2;
printf("d1 feet = %d\n",d1.feet);
  d1.inch=20;
printf("d1 inch = %f\n",d1.inch);
   
//

//printf("name of e2 is %s ",d2.name);
printf("Enter the feet \n");
scanf("%d",&d2.feet);

printf("\nEnter the inch \n");
scanf("%f",&d2.inch);
//printf("\nmarks of %s is %d",e2.name,e2.marks);


}