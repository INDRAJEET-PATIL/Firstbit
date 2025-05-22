#include<stdio.h>

void first(int fn, int ln);
void second(int fn, int ln);
void third(int fn, int ln);
void forth(int fn, int ln);
void fifth(int n);

void main()
{
	int ch;
	printf("Enter your choice\n 1.print armstorng number in the given range 1 to n \n 2.print prime number in the given range 1 to n \n 3. print perfect number in the given range 1 to n\n 4.print storng number in the given range 1 to n\n 5.fibonassi series \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		int a,b;
		printf("Enter the range:");
		scanf("%d%d",&a,&b);
		first(a,b);
	}
	else if(ch==2)
	{
		int a,b;
		printf("Enter the range:");
		scanf("%d%d",&a,&b);
		second(a,b);
	}
	else if(ch==3)
	{
		int a,b;
		printf("Enter the range:");
		scanf("%d%d",&a,&b);
		third(a,b);
	}
	else if(ch==4)
	{
		int a,b;
		printf("Enter the range:");
		scanf("%d%d",&a,&b);
		forth(a,b);
	}
	else if(ch==5)
	{
		int a;
		printf("Enter number:");
		scanf("%d",&a);
		fifth(a);
	}
	else
	{
		printf("Invalid choice");
	}
}

void first(int fn, int ln)
{
	printf("armstrong numbers between %d to %d are:\n",fn,ln);
	for(int x=fn;x<=ln;x++)
	{
		
		int num=x;
		int rem,sum=0,no,i=0,num2;
		no=num;
		num2=num;
		while(no>0)
		{
			no=no/10;
			i++;
		}
		while(num2>0)
		{
			int j=i,power=1;
			rem=num2%10;
			num2=num2/10;
			while(j>0)
			{
			power=power*rem;
			j--;	
			}
			sum=sum+power;
		}
		if(x==sum)
		{
			printf("%d \n",x);
		}
	}
}

void second(int fn,int ln)
{
	for(int x=fn;x<=ln;x++)
	{
	int num=x,flag=0,i=2;
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
		}
		i++;
	}
	if(flag==0)
	{
		printf("%d  ",num);
	}
	}
}

void third(int fn,int ln)
{
	for(int x=fn;x<=ln;x++)
	{
		int num=x;
		int i=1,sum=0;
		while(i<=num/2)
		{
			if(num%i==0)
			{	
				sum=sum+i;
			}
			i++;
		}
		if(num==sum)
		{
			printf("%d \n",num);
		}
	}
}

void forth(int fn,int ln)
{
	for(int x=fn;x<=ln;x++)
	{
		int num=x;
		int rem,no=num,sum=0;
		while(no>0)
		{
			rem=no%10;
			int i=rem,fact=1;
			while(i>0)
			{
				fact=fact*i;
				i--;
			}
			sum=sum+fact;
			no=no/10;
		}
		if(num==sum)
		{
			printf("%d\n",num);
		}
	}
}

void fifth(int n)
{
	int i,sum=0,f=0,s=1;
	for(i=0;sum<=n;i++)
	{	
		f=sum;
		printf("%d ",sum);
		sum=f+s;
		s=f;
	}	
}

