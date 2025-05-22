#include<stdio.h>

int calculateDiscount(int price);
int findGreatestNumber(int a, int b, int c);
int performOperation(char operation, int a, int b);
int compareAndDisplayMenu(int choice, int a, int b);
int calculatePriceWithDiscount(int price, char isStudent);

void main()
{
    int ch;
    printf("Enter your choice\n 1. Find the final price and discount on the price. \n 2. Greatest number among three. \n 3. Perform operation on two numbers \n 4. Display menu and perform specific operations \n 5. Accept price and give discount for them.\n");
    scanf("%d", &ch);

    if (ch == 1)
    {
        int price = 1800;
        int finalPrice = calculateDiscount(price);
        printf("Final price after discount = %d\n", finalPrice);
    }
    else if (ch == 2)
    {
        int greatest = findGreatestNumber(50, 20, 30);
        printf("The greatest number is: %d\n", greatest);
    }
    else if (ch == 3)
    {
        int result = performOperation('*', 10, 20);
        printf("Result of operation: %d\n", result);
    }
    else if (ch == 4)
    {
        int result = compareAndDisplayMenu(1, 15, 10);
        if (result != -1)
            printf("Operation result: %d\n", result);
    }
    else if (ch == 5)
    {
        int finalPrice = calculatePriceWithDiscount(501, 'y');
        if (finalPrice != -1)
            printf("Final price after discount: %d\n", finalPrice);
    }
    else
    {
        printf("Invalid choice\n");
    }
}

int calculateDiscount(int price)
{
    int discount = 0, finalPrice = 0;
    if (price <= 1000 && price > 500)
    {
        discount = price * 0.10;
    }
    else if (price <= 2500 && price > 1000)
    {
        discount = price * 0.20;
    }
    else if (price <= 5000 && price > 2500)
    {
        discount = price * 0.30;
    }
    else
    {
        discount = price * 0.05;
    }
    finalPrice = price - discount;
    return finalPrice;
}

int findGreatestNumber(int a, int b, int c)
{
    if (a > b)
        return (a > c) ? a : c;
    else
        return (b > c) ? b : c;
}

int performOperation(char operation, int a, int b)
{
    int result;
    switch (operation)
    {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if (b != 0)
                result = a / b; 
            else
            {
                printf("Error: Division by zero\n");
                return -1;
            }
            break;
        case '%': 
            if (b != 0)
                result = a % b; 
            else
            {
                printf("Error: Modulus by zero\n");
                return -1;
            }
            break;
        default: 
            printf("Invalid operation\n");
            return -1;
    }
    return result;
}

int compareAndDisplayMenu(int choice, int a, int b)
{
    if (choice == 1)
    {
        return (a > b) ? a : b;
    }
    else if (choice == 2)
    {
        return (a % 2 == 0) ? 1 : 0; // 1 for even, 0 for odd
    }
    else
    {
        printf("Invalid menu choice\n");
        return -1;
    }
}

int calculatePriceWithDiscount(int price, char isStudent)
{
    int discount = 0, finalPrice = 0;
    if (isStudent == 'y')
    {
        if (price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    }
    else
    {
        if (price > 600)
            discount = price * 0.15;
        else
        {
            printf("No discount available\n");
            return -1;
        }
    }
    finalPrice = price - discount;
    return finalPrice;
}
