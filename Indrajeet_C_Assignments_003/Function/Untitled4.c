//funtion type 2
#include<stdio.h>
void main(){
	int areaRect();
	int periRect();
	
	printf("Start\n");
int	a=areaRect();
	printf("%d\n",a);
int	p=periRect();
	printf("%d",p);
	printf("\nEnd");
}
int areaRect(){
	int length,width;
	printf("Enter the length ");
	scanf("%d",&length);
	printf("Enter the width ");
	scanf("%d",&width);
	int Area=(length*width);
//	int Perimeter=(2*(length+width));
//	printf("Area of rectangle is %d\nPerimeter of rectangle is %d\n",Area,Perimeter);	
return Area;
}

int periRect(){
	
		int length,width;
	printf("Enter the length ");
	scanf("%d",&length);
	printf("Enter the width ");
	scanf("%d",&width);
//	int Area=(length*width);
	int Perimeter=(2*(length+width));
//	printf("Area of rectangle is %d\nPerimeter of rectangle is %d\n",Area,Perimeter);
return Perimeter;
}

