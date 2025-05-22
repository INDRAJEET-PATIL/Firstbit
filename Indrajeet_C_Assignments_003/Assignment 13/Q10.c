#include<stdio.h>

typedef struct Product{
	int id;
	char name[20];
	int quantity;
	int price;

}Product;

void main(){


Product p1,p2;
  strcpy(p1.name,"choclet");
printf("p1 name = %s\n",p1.name);
  p1.id=264;
printf("p1 id is = %d\n",p1.id);
    p1.quantity=45;
printf("p1 quantity is = %d\n",p1.quantity);
	p1.price=100;
printf("p1 price is = %d\n",p1.price);

printf("Enter the name of p2\n");
scanf("%s",p2.name);

printf("\nEnter the id of %s\n",p2.name);
scanf("%d",&p2.id);

printf("\nEnter the quantity of %s\n",p2.name);
scanf("%d",&p2.quantity);

printf("\nEnter the price of %s\n",p2.name);
scanf("%d",&p2.price);



	
}