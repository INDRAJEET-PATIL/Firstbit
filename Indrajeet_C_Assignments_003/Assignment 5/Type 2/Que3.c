#include<stdio.h>
void first()
{
	int i=1;
	while(i<11)
	{
		printf("%d \n",i);
		i++;
	}
}

void second()
{
	int num=7,i=1,table=0;
	while(i<11)
	{
		table=num*i;
		printf("%d \n",table);
		i++;
	}
}

int third()
{
	int num=12,i=1,sum=0;
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	return sum;
}

int forth()
{
	int num=11,flag=0,i=2;
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
		return 0;
	}
	else
	{
		return 1;
	}
}

int fifth()
{
	int num=153;
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
	if(num==sum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int sixth()
{
	int num=6;
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
		return 0;
	}
	else
	{
		return 1;
	}
}

int seventh()
{
	int num=4,i=num;
	int fact=1;
	while(i>0)
	{
		fact=fact*i;
		i--;
	}
	return fact;
}

int eighth()
{
	int num=12;
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
		return 0;
	}
	else
	{
		return 1;
	}
}

int nineth()
{
	int num=33433;
	int rem,no,rev=0;
	no=num;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(num==rev)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int tenth()
{
	int num=741852963,ld,fd=num,sum=0;
	ld=num%10;
	while(fd>10)
	{
		fd=fd/10;		
	}
	sum=fd+ld;
	return sum;
}
void main()
{
	int ch;
	printf("Enter your choice\n 1.print numbers 1 to 10 \n 2.print table for the given number \n 3. calculate the sum of numbers in the given range \n 4.check the number is prime or not \n 5.check the number is armstrong or not \n 6.check the number is perfect or not \n 7.find the factorial or the number \n 8.check the number is strong or not \n 9.check the number is palindrome or not \n 10.add the first and last digit of the given number \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		first();
	}
	else if(ch==2)
	{
		second();
	}
	else if(ch==3)
	{
		int x=third();
		printf("sum = %d",x);
	}
	else if(ch==4)
	{
		int x=forth();
		if(x==0)
		printf("number is prime");
		else
		printf("number is not prime");
	}
	else if(ch==5)
	{
		int x=fifth();
		if(x==0)
		printf("Number is an armstrong number..");
		else
		printf("Number is not an armstrong number..");
	}
	else if(ch==6)
	{
		if(sixth()==0)
		printf("Number is a perfect number..");
		else
		printf("Number is not a perfect number..");
	}
	else if(ch==7)
	{
		int x=seventh();
		printf("Factorial of given number is %d",x);
	}
	else if(ch==8)
	{
		if(eighth()==0)
		printf("Number is a Strong Number..");
		else
		printf("Number is not a Strong Number..");
	}
	else if(ch==9)
	{
		if(nineth()==0)
		printf("Number is a palindrome number.");
		else
		printf("Number is not a palindrome number.");
	}
	else if(ch==10)
	{
		int x=tenth();
		printf("Sum of first and last digit of is %d",x);
	}
	else
	{
		printf("Invalid choice");
	}
}

