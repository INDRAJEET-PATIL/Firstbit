
//Convert Type 3 into Pointer
#include<stdio.h>
void first(int* celsius);
void second(int* l, int* w);
void thirdd(int* num);
void forth(int* num);
void fifth(int* salary);
void sixth(char* gender, int* age);
void main() {
int ch;
printf("Enter your choice\n");
printf("1. Convert Celsius to Fahrenheit\n");
printf("2. Calculate area of rectangle\n");
printf("3. Calculate sum of digits in a three-digit number\n");
printf("4. Check if number is even or odd\n");
printf("5. Calculate total salary\n");
printf("6. Check eligibility for marriage\n");
scanf("%d", &ch);
if (ch == 1) {
int celsius;
printf("Enter Celsius: ");
scanf("%d", &celsius);
first(&celsius);
} else if (ch == 2) {
int l, w;
printf("Enter length and width of rectangle: ");
scanf("%d %d", &l, &w);
second(&l, &w);
} else if (ch == 3) {
int num;
printf("Enter a three-digit number: ");
scanf("%d", &num);
thirdd(&num);
} else if (ch == 4) {
int num;
printf("Enter a number: ");
scanf("%d", &num);
forth(&num);
} else if (ch == 5) {
int salary;
printf("Enter basic salary: ");
scanf("%d", &salary);
fifth(&salary);
} else if (ch == 6) {
char gender;
int age;
printf("Enter gender (M/F) and age: ");
scanf(" %c %d", &gender, &age);
sixth(&gender, &age);
} else {
printf("Invalid choice\n");
}
}
void first(int* celsius) {
int f = (*celsius * 9) / 5 + 32;
printf("%d Celsius = %d Fahrenheit\n", *celsius, f);
}
void second(int* l, int* w) {
int area = (*l) * (*w);
printf("Area of rectangle: %d sq.cm\n", area);
}
void thirdd(int* num) {
int r1, r2, r3, q1, sum;
r1 = *num % 10;
q1 = *num / 10;
r2 = q1 % 10;
r3 = q1 / 10;
sum = r1 + r2 + r3;
printf("Sum of digits: %d\n", sum);
}
void forth(int* num) {
if (*num % 2 == 0) {
printf("Number is even\n");
} else {
printf("Number is odd\n");
}
}
void fifth(int* salary) {
int da, ta, hra, Total_Salary;
if (*salary <= 5000) {
da = *salary * 0.10;
ta = *salary * 0.20;
hra = *salary * 0.25;
} else {
da = *salary * 0.15;
ta = *salary * 0.25;
hra = *salary * 0.30;
}
Total_Salary = *salary + da + ta + hra;
printf("Total Salary: %d\n", Total_Salary);
}
void sixth(char* gender, int* age) {
if ((*gender == 'M' && *age < 21) || (*gender == 'F' && *age < 18)) {
printf("Person is not eligible for marriage\n");
} else {
printf("Person is eligible for marriage\n");
}
}