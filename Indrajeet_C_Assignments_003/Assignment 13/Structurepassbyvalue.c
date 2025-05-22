#include<stdio.h>
#include<conio.h>
typedef struct student{
	int RollNo;
	char name[20];
	int marks;
}student;

typedef struct Employee{
	int id;
	char name[20];
	int salary;
}Employee;

typedef struct Admin{
	int id;
	char name[20];
	int salary;
	int allowance;
}Admin;

typedef struct HR{
	int id;
	char name[20];
	int salary;
	int commission;
}HR;

typedef struct salesManager{
	int id;
	char name[20];
	int salary;
	int incentive;
	char target[20];
}salesManager;

typedef struct date{
	int day;
	char month[15];
	int year;
}date;

typedef struct time{
	int hour;
	int min;
	int sec;
}time;

typedef struct distance{
	int feet;
	int inch;
}distance;

typedef struct complex{
	char real[20];
	char img[30];
}complex;

typedef struct product{
	int id;
	char name[20];
	int quantity;
	int price;
}product;

void displayStudent(student);
void displayEmployee(Employee);
void displayAdmin(Admin);
void displayHR(HR);
void displaySalesManager(salesManager);
void displayDate(date);
void displayTime(time);
void displayDistance(distance);
void displayComplex(complex);
void displayProduct(product);



void main()
{
	student s;
	displayStudent(s);
	
	Employee e;
	displayEmployee(e);
	
	Admin a;
	displayAdmin(a);
	
	HR h;
	displayHR(h);
	
	salesManager sm;
	displaySalesManager(sm);
	
	date d;
	displayDate(d);

	time t;
	displayTime(t);
	
	distance ds;
	displayDistance(ds);
	
	complex c;
	displayComplex(c);
	
	product p;
	displayProduct(p);
}
void displayStudent(student s)
{
	printf("Enter Roll no name and marks of student:\n");
	scanf("%d",&s.RollNo);
	scanf("%s",&s.name);
	scanf("%d",&s.marks);
	printf("Roll No:%d \n",s.RollNo);
	printf("Name:%s \n",s.name);
	printf("Marks:%d \n",s.marks);
}

void displayEmployee(Employee e)
{
	printf("Enter Id,name and salary of Employee:\n");
	scanf("%d",&e.id);
	scanf("%s",&e.name);
	scanf("%d",&e.salary);
	printf("Employee Id:%d \n",e.id);
	printf("Name:%s \n",e.name);
	printf("Salary:%d \n",e.salary);
}

void displayAdmin(Admin a)
{
	printf("Enter Id,name,salary and allowace of Admin:\n");
	scanf("%d",&a.id);
	scanf("%s",&a.name);
	scanf("%d",&a.salary);
	scanf("%d",&a.allowance);
	printf("Admin Id:%d \n",a.id);
	printf("Name:%s \n",a.name);
	printf("Salary:%d \n",a.salary);
	printf("Allowance:%d \n",a.allowance);
}

void displayHR(HR h)
{
	printf("Enter Id,name,salary and commission of HR:\n");
	scanf("%d",&h.id);
	scanf("%s",&h.name);
	scanf("%d",&h.salary);
	scanf("%d",&h.commission);
	printf("Admin Id:%d \n",h.id);
	printf("Name:%s \n",h.name);
	printf("Salary:%d \n",h.salary);
	printf("Commission:%d \n",h.commission);
}

void displaySalesManager(salesManager sm)
{
	printf("Enter Id,name,salary,incentive and target of sales Manager:\n");
	scanf("%d",&sm.id);
	scanf("%s",&sm.name);
	scanf("%d",&sm.salary);
	scanf("%d",&sm.incentive);
	scanf("%s",&sm.target);
	printf("Admin Id:%d \n",sm.id);
	printf("Name:%s \n",sm.name);
	printf("Salary:%d \n",sm.salary);
	printf("Incentive:%d \n",sm.incentive);
	printf("Target:%s \n",sm.target);
}

void displayDate(date d)
{
	printf("Enter Day,month and year:\n");
	scanf("%d",&d.day);
	scanf("%s",&d.month);
	scanf("%d",&d.year);
	printf("date: %d",d.day);
	printf(" %s",d.month);
	printf(" %d\n",d.year);
}

void displayTime(time t)
{
	printf("Enter hour, min and seconds:\n");
	scanf("%d",&t.hour);
	scanf("%d",&t.min);
	scanf("%d",&t.sec);
	printf("Time= %d:",t.hour);
	printf("%d:",t.min);
	printf("%d\n",t.sec);
}

void displayDistance(distance ds)
{
	printf("Enter feet and inches:\n");
	scanf("%d",&ds.feet);
	scanf("%d",&ds.inch);
	printf("distance= %d feet ",ds.feet);
	printf("%d inch\n",ds.inch);
}

void displayComplex(complex c)
{
	printf("Enter real and Imaginary:\n");
	scanf("%s",&c.real);
	scanf("%s",&c.img);
	printf("In real= %s\n",c.real);
	printf("In imaginary=%s\n",c.img);	
}

void displayProduct(product p)
{
	printf("Enter id,name,quantity and price of product:\n");
	scanf("%d",&p.id);
	scanf("%s",&p.name);
	scanf("%d",&p.quantity);
	scanf("%d",&p.price);
	printf("Admin Id:%d \n",p.id);
	printf("Name:%s \n",p.name);
	printf("Quantity:%d \n",p.quantity);
	printf("Price:%d \n",p.price);
}