#include<stdio.h>

typedef struct Complex{
	float real;
	float imaginary;


}Complex;

void main(){


Complex c1,c2;

  c1.real=2;
printf("d1 real = %f\n",c1.real);
  c1.imaginary=20;
printf("d1 imaginary = %f\n",c1.imaginary);
   
//

//printf("name of e2 is %s ",d2.name);
printf("Enter the real \n");
scanf("%f",&c2.real);

printf("\nEnter the imaginary \n");
scanf("%f",&c2.imaginary);
//printf("\nmarks of %s is %d",e2.name,e2.marks);


}