#include<stdio.h>
float first();
void main()
{
	int ch;
	printf("Enter your choice\n 1.convert celsius to fahrenheit \n 2.calculate area of rectangle \n 3.calculate sum of three digits in a given three digit number \n 4.check number is even or odd \n 5.program for basic salary. \n 6.check person eligible or not eligible for marry\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		float x=first();
		printf("%f Fahrenheit",x);
	}
	else if(ch==2)
	{
		int x=second();
		printf("Area of rectangle  is %d sq.cm",x);
	}
	else if(ch==3)
	{
	
		int x=third();
		printf("sum of three digits in number is: %d \n",x);
	}
	else if(ch==4)
	{
		if(forth()==0)
		printf("Number is even");
		else
		printf("Number is odd");
	}
	else if(ch==5)
	{
		int x=fifth();
		printf("Total Salary : %d",x);
	}
	else if(ch==6)
	{
		if(sixth()==0)
		printf("Person is not eligible for marry");
		else
		printf("Person is eligible for marry");
	}
	else
	{
		printf("Invalid choice");
	}
}

float first()
{
	int celsius;
	printf("Enter celsius: ");
	scanf("%d",&celsius);
	float f=(celsius*9/5)+32;
	return f;
}
int second()
{
	int l=4,w=5,area;
	area=l*w;
	return area;
}
int third()
{
	int num=123;
	int r1,r2,r3,q1,sum;
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;
	sum=r1+r2+r3;
	return sum;
}
int forth()
{
	int num=11;
	if(num%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int fifth()
{
	int salary=5002,da,ta,hra,Total_Salary;
	if(salary<=5000)
	{
		da=salary*0.10;
		ta=salary*0.20;
		hra=salary*0.25;
		Total_Salary=salary+da+ta+hra;
		return Total_Salary;
	}
	else
	{
		da=salary*0.15;
		ta=salary*0.25;
		hra=salary*0.30;
		Total_Salary=salary+da+ta+hra;
		return Total_Salary;
	}
}
int sixth()
{
	int age=17;
	unsigned char gender='F';
	if(gender=='M'&&age<21||gender=='F'&&age<18)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}