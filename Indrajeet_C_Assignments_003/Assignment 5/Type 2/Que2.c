#include<stdio.h>
void main()
{
	int ch;
	printf("Enter your choice\n 1.find the final price and discount on the price. \n 2.Greatest number among three. \n 3. perform operation on the two numbers \n 4.display menu and perform specific operations \n 5.accept price and give discout for them.\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		first();
	}
	else if(ch==2)
	{
		int x=second();
		printf("%d is a greater number among given numbers",x);
	}
	else if(ch==3)
	{
		int x=third();
		printf("%d",x);
	}
	else if(ch==4)
	{
		int x=forth();
		printf("%d is a greater number",x);
	}
	else if(ch==5)
	{
		int x=fifth();
		printf("Final price= %d",x);
	}
	else
	{
		printf("Invalid choice");
	}
}
void first()
{
	int price=1800,discount,FinalPrice;
	if(price<=1000 && price>500)
	{
		discount=price*0.10;
		FinalPrice=price-discount;
		printf("price of item= %d\n",price);
		printf("discout on price= %d\n",discount);
		printf("Final price after discount= %d",FinalPrice);		
	}
	else
	{
		if(price<=2500 && price>1000)
		{
			discount=price*0.20;
			FinalPrice=price-discount;
			printf("price of item= %d\n",price);
			printf("discout on price= %d\n",discount);
			printf("Final price after discount= %d",FinalPrice);
		}
		else
		{
			if(price<=5000 && price>2500)
			{
				discount=price*0.30;
				FinalPrice=price-discount;
				printf("price of item= %d\n",price);
				printf("discout on price= %d\n",discount);
				printf("Final price after discount= %d",FinalPrice);
			}
			else
			{
				discount=price*0.05;
				FinalPrice=price-discount;
				printf("price of item= %d\n",price);
				printf("discout on price= %d\n",discount);
				printf("Final price after discount= %d",FinalPrice);
			}
		}
	}
}

int second()
{
	int a=50,b=20,c=30;
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}

int third()
{
	int a=10,b=20;
	char choose='*';
	if(choose=='+')
	{
		printf("addition of %d and %d is:",a,b);
		return a+b;
	}
	else
	{
		if(choose=='-')
		{
			printf("substraction of %d and %d is:",a,b);
			return a-b;
		}
		else
		{
			if(choose=='*')
			{
				printf("multiplication of %d and %d is:",a,b);
				return a*b;
			}
			else
			{
				if(choose=='/')
				{
					printf("division of %d and %d is:",a,b);
					return a/b;
				}
				else
				{
					if(choose=='%')
					{
						printf("Mod of %d and %d is:",a,b);
						return a%b;
					}
					else
					{
							printf("invalid choise");
					}
				}
			}
		}
	}
	
}
int forth()
{
	int a,b;
	printf("Enter your choice\n 1.greater number\n 2.even or odd\n");
	int c;
	scanf("%d",&c);
	printf("***************************************************************\n");
	if(c==1)
	{
		printf("Enter two numbers");
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	else
	{
		if(c==2)
		{
			printf("Enter Number");
			scanf("%d",&a);
			if(a%2==0)
			{
				printf("%d is a even number",a);
			}
			else
			{
				printf("%d is a odd number",a);
			}
		}
		else
		{
			printf("invalid choice....");
		}
	}
}
int fifth()
{
	int price=501,discount,FinalPrice;
	//printf("You are student? \n");
	char d='y';
	if(d=='y')
	{
		if(price>500)
		{
			discount=price*0.20;
			FinalPrice=price-discount;
			printf("price= %d \n",price);
			printf("discount= %d \n",discount);
			return FinalPrice;
		}
		else
		{
			discount=price*0.10;
			FinalPrice=price-discount;
			printf("price= %d \n",price);
			printf("discount= %d \n",discount);
			return FinalPrice;
		}
	}
	else
	{
		if(price>600)
		{
			discount=price*0.15;
			FinalPrice=price-discount;
			printf("price= %d \n",price);
			printf("discount= %d \n",discount);
			return FinalPrice;
		}
		else
		{
			printf("No discount for you sir....\n");
			return FinalPrice;
		}
	}
}