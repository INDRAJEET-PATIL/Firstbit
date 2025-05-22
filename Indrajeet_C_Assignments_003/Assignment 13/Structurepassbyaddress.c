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

void displayStudent(student*,int);
void displayEmployee(Employee*,int);
void displayAdmin(Admin*,int);
void displayHR(HR*,int);
void displaySalesManager(salesManager*,int);
void displayDate(date*,int);
void displayTime(time*,int);
void displayDistance(distance*,int);
void displayComplex(complex*,int);
void displayProduct(product*,int);



void main()
{
	student arr[3];
	displayStudent(arr,3);
	for(int i=0;i<3;i++)
	{
		printf("Roll No:%d \n",arr[i].RollNo);
		printf("Name:%s \n",arr[i].name);
		printf("Marks:%d \n",arr[i].marks);
	}
	Employee err[3];
	displayEmployee(err,3);
	for(int i=0;i<3;i++)
	{
		printf("Employee Id:%d \n",err[i].id);
		printf("Name:%s \n",err[i].name);
		printf("Salary:%d \n",err[i].salary);
	}
	
	Admin ad[2];
	displayAdmin(ad,2);
	for(int i=0;i<2;i++)
	{
		printf("Admin Id:%d \n",ad[i].id);
		printf("Name:%s \n",ad[i].name);
		printf("Salary:%d \n",ad[i].salary);
		printf("Allowance:%d \n",ad[i].allowance);
	}
	HR hrr[2];
	displayHR(hrr,2);
	for(int i=0;i<2;i++)
	{
		printf("Admin Id:%d \n",hrr[i].id);
		printf("Name:%s \n",hrr[i].name);
		printf("Salary:%d \n",hrr[i].salary);
		printf("Commission:%d \n",hrr[i].commission);
	}
	
	salesManager sm[2];
	displaySalesManager(sm,2);
	for(int i=0;i<2;i++)
	{
		printf("Admin Id:%d \n",sm[i].id);
		printf("Name:%s \n",sm[i].name);
		printf("Salary:%d \n",sm[i].salary);
		printf("Incentive:%d \n",sm[i].incentive);
		printf("Target:%s \n",sm[i].target);
	}
	
	date darr[2];
	displayDate(darr,2);
	for(int i=0;i<2;i++)
	{
		printf("date: %d",darr[i].day);
		printf(" %s",darr[i].month);
		printf(" %d\n",darr[i].year);
	}

	time trr[2];
	displayTime(trr,2);
	for(int i=0;i<2;i++)
	{
		printf("Time= %d:",trr[i].hour);
		printf("%d:",trr[i].min);
		printf("%d\n",trr[i].sec);
	}
	
	distance ds[2];
	displayDistance(ds,2);
	for(int i=0;i<2;i++)
	{
		printf("distance= %d feet ",ds[i].feet);
		printf("%d inch\n",ds[i].inch);
	}
	
	complex c[2];
	displayComplex(c,2);
	for(int i=0;i<2;i++)
	{
		printf("In real= %s\n",c[i].real);
		printf("In imaginary=%s\n",c[i].img);	
	}
	
	product p[2];
	displayProduct(p,2);
	for(int i=0;i<2;i++)
	{
		printf("Admin Id:%d \n",p[i].id);
		printf("Name:%s \n",p[i].name);
		printf("Quantity:%d \n",p[i].quantity);
		printf("Price:%d \n",p[i].price);
	}
}
void displayStudent(student* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Roll no name and marks of student:\n");
		scanf("%d",&arr[i].RollNo);
		scanf("%s",&arr[i].name);
		scanf("%d",&arr[i].marks);
		
	}
}

void displayEmployee(Employee* err,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Id,name and salary of Employee:\n");
		scanf("%d",&err[i].id);
		scanf("%s",&err[i].name);
		scanf("%d",&err[i].salary);
	}
}

void displayAdmin(Admin* ad,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("Enter Id,name,salary and allowace of Admin:\n");
	scanf("%d",&ad[i].id);
	scanf("%s",&ad[i].name);
	scanf("%d",&ad[i].salary);
	scanf("%d",&ad[i].allowance);
	}
}

void displayHR(HR* hrr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Id,name,salary and commission of HR:\n");
		scanf("%d",&hrr[i].id);
		scanf("%s",&hrr[i].name);
		scanf("%d",&hrr[i].salary);
		scanf("%d",&hrr[i].commission);
	}
}

void displaySalesManager(salesManager* sm,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Id,name,salary,incentive and target of sales Manager:\n");
		scanf("%d",&sm[i].id);
		scanf("%s",&sm[i].name);
		scanf("%d",&sm[i].salary);
		scanf("%d",&sm[i].incentive);
		scanf("%s",&sm[i].target);
	}
}

void displayDate(date* darr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Day,month and year:\n");
		scanf("%d",&darr[i].day);
		scanf("%s",&darr[i].month);
		scanf("%d",&darr[i].year);
	}
}

void displayTime(time* trr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter hour, min and seconds:\n");
		scanf("%d",&trr[i].hour);
		scanf("%d",&trr[i].min);
		scanf("%d",&trr[i].sec);
	}
}

void displayDistance(distance* ds,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("Enter feet and inches:\n");
	scanf("%d",&ds[i].feet);
	scanf("%d",&ds[i].inch);
	}
}

void displayComplex(complex* c,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter real and Imaginary:\n");
		scanf("%s",&c[i].real);
		scanf("%s",&c[i].img);
	}
}

void displayProduct(product* p,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter id,name,quantity and price of product:\n");
		scanf("%d",&p[i].id);
		scanf("%s",&p[i].name);
		scanf("%d",&p[i].quantity);
		scanf("%d",&p[i].price);
	}
}