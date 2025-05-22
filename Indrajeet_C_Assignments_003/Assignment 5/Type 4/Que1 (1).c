#include<stdio.h>
float convertCelsiusToFahrenheit(float celsius);
int calculateRectangleArea(int length, int width);
int sumOfThreeDigits(int num);
int isEven(int num);
int calculateSalary(int salary);
int isEligibleForMarriage(int age, char gender);

void main()
{
    int choice;
    printf("Enter your choice\n 1.convert celsius to fahrenheit \n 2.calculate area of rectangle \n 3.calculate sum of three digits in a given three digit number \n 4.check number is even or odd \n 5.program for basic salary \n 6.check person eligible or not eligible for marriage\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float celsius;
        printf("Enter celsius: ");
        scanf("%f", &celsius);
        printf("%.2f Fahrenheit\n", convertCelsiusToFahrenheit(celsius));
    }
    else if (choice == 2)
    {
        int length, width;
        printf("Enter length and width: ");
        scanf("%d %d", &length, &width);
        printf("Area of rectangle is %d sq.cm\n", calculateRectangleArea(length, width));
    }
    else if (choice == 3)
    {
        int num;
        printf("Enter a three-digit number: ");
        scanf("%d", &num);
        printf("Sum of three digits in number is: %d\n", sumOfThreeDigits(num));
    }
    else if (choice == 4)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (isEven(num) == 0)
            printf("Number is even\n");
        else
            printf("Number is odd\n");
    }
    else if (choice == 5)
    {
        int salary;
        printf("Enter basic salary: ");
        scanf("%d", &salary);
        printf("Total Salary: %d\n", calculateSalary(salary));
    }
    else if (choice == 6)
    {
        int age;
        char gender;
        printf("Enter age and gender (M/F): ");
        scanf("%d %c", &age, &gender);
        if (isEligibleForMarriage(age, gender) == 0)
            printf("Person is not eligible for marriage\n");
        else
            printf("Person is eligible for marriage\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}

float convertCelsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int calculateRectangleArea(int length, int width)
{
    return length * width;
}

int sumOfThreeDigits(int num)
{
    int r1 = num % 10;
    int q1 = num / 10;
    int r2 = q1 % 10;
    int r3 = q1 / 10;
    return r1 + r2 + r3;
}

int isEven(int num)
{
    return num % 2;
}

int calculateSalary(int salary)
{
    int da, ta, hra;
    if (salary <= 5000)
    {
        da = salary * 0.10;
        ta = salary * 0.20;
        hra = salary * 0.25;
    }
    else
    {
        da = salary * 0.15;
        ta = salary * 0.25;
        hra = salary * 0.30;
    }
    return salary + da + ta + hra;
}

int isEligibleForMarriage(int age, char gender)
{
    if ((gender == 'M' && age < 21) || (gender == 'F' && age < 18))
        return 0;
    return 1;
}
