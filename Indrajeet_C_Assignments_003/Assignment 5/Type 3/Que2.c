#include<stdio.h>

void findFinalPriceAndDiscount(int price);
void findGreatestNumber(int a, int b, int c);
void performOperation(char choose, int a, int b);
void displayMenuAndPerformOperation(int choice, int a, int b);
void calculatePriceWithDiscount(int price, char isStudent);

void main()
{
    int ch;
    printf("Enter your choice\n 1.find the final price and discount on the price. \n 2.Greatest number among three. \n 3. perform operation on the two numbers \n 4.display menu and perform specific operations \n 5.accept price and give discount for them.\n");
    scanf("%d", &ch);

    if (ch == 1)
    {
        int price = 1800;
        findFinalPriceAndDiscount(price);
    }
    else if (ch == 2)
    {
        findGreatestNumber(50, 20, 30);
    }
    else if (ch == 3)
    {
        performOperation('*', 10, 20);
    }
    else if (ch == 4)
    {
        displayMenuAndPerformOperation(1, 15, 10);
    }
    else if (ch == 5)
    {
        calculatePriceWithDiscount(501, 'y');
    }
    else
    {
        printf("Invalid choice");
    }
}

void findFinalPriceAndDiscount(int price)
{
    int discount, FinalPrice;
    if (price <= 1000 && price > 500)
    {
        discount = price * 0.10;
        FinalPrice = price - discount;
    }
    else if (price <= 2500 && price > 1000)
    {
        discount = price * 0.20;
        FinalPrice = price - discount;
    }
    else if (price <= 5000 && price > 2500)
    {
        discount = price * 0.30;
        FinalPrice = price - discount;
    }
    else
    {
        discount = price * 0.05;
        FinalPrice = price - discount;
    }
    printf("Price of item = %d\nDiscount on price = %d\nFinal price after discount = %d\n", price, discount, FinalPrice);
}

void findGreatestNumber(int a, int b, int c)
{
    int greatest;
    if (a > b)
    {
        greatest = (a > c) ? a : c;
    }
    else
    {
        greatest = (b > c) ? b : c;
    }
    printf("%d is the greatest number among given numbers\n", greatest);
}

void performOperation(char choose, int a, int b)
{
    int result;
    if (choose == '+')
    {
        result = a + b;
        printf("Addition of %d and %d is: %d\n", a, b, result);
    }
    else if (choose == '-')
    {
        result = a - b;
        printf("Subtraction of %d and %d is: %d\n", a, b, result);
    }
    else if (choose == '*')
    {
        result = a * b;
        printf("Multiplication of %d and %d is: %d\n", a, b, result);
    }
    else if (choose == '/')
    {
        result = a / b;
        printf("Division of %d and %d is: %d\n", a, b, result);
    }
    else if (choose == '%')
    {
        result = a % b;
        printf("Modulus of %d and %d is: %d\n", a, b, result);
    }
    else
    {
        printf("Invalid choice\n");
    }
}

void displayMenuAndPerformOperation(int choice, int a, int b)
{
    if (choice == 1)
    {
        if (a > b)
        {
            printf("%d is the greater number\n", a);
        }
        else
        {
            printf("%d is the greater number\n", b);
        }
    }
    else if (choice == 2)
    {
        if (a % 2 == 0)
        {
            printf("%d is an even number\n", a);
        }
        else
        {
            printf("%d is an odd number\n", a);
        }
    }
    else
    {
        printf("Invalid choice\n");
    }
}

void calculatePriceWithDiscount(int price, char isStudent)
{
    int discount, FinalPrice;
    if (isStudent == 'y')
    {
        if (price > 500)
        {
            discount = price * 0.20;
            FinalPrice = price - discount;
        }
        else
        {
            discount = price * 0.10;
            FinalPrice = price - discount;
        }
    }
    else
    {
        if (price > 600)
        {
            discount = price * 0.15;
            FinalPrice = price - discount;
        }
        else
        {
            printf("No discount available\n");
            return;
        }
    }
    printf("Price = %d\nDiscount = %d\nFinal Price = %d\n", price, discount, FinalPrice);
}
