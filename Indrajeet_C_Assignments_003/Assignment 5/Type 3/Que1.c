#include<stdio.h>

void first(float celsius) {
	float f = (celsius * 9 / 5) + 32;
	printf("%f Fahrenheit", f);
}

void second(int l, int w) {
	int area = l * w;
	printf("Area of rectangle is %d sq.cm", area);
}

void third(int num) {
	int r1, r2, r3, q1, sum;
	r1 = num % 10;
	q1 = num / 10;
	r2 = q1 % 10;
	r3 = q1 / 10;
	sum = r1 + r2 + r3;
	printf("Sum of three digits in number is: %d", sum);
}

void forth(int num) {
	if (num % 2 == 0) {
		printf("Number is even");
	} else {
		printf("Number is odd");
	}
}

void fifth(int salary) {
	int da, ta, hra, Total_Salary;
	if (salary <= 5000) {
		da = salary * 0.10;
		ta = salary * 0.20;
		hra = salary * 0.25;
	} else {
		da = salary * 0.15;
		ta = salary * 0.25;
		hra = salary * 0.30;
	}
	Total_Salary = salary + da + ta + hra;
	printf("Total Salary: %d", Total_Salary);
}

void sixth(int age, char gender) {
	if ((gender == 'M' && age < 21) || (gender == 'F' && age < 18)) {
		printf("Person is not eligible for marry");
	} else {
		printf("Person is eligible for marry");
	}
}

void main() {
	int ch;
	printf("Enter your choice\n 1.convert celsius to fahrenheit \n 2.calculate area of rectangle \n 3.calculate sum of three digits in a given three-digit number \n 4.check number is even or odd \n 5.program for basic salary. \n 6.check person eligible or not eligible for marry\n");
	scanf("%d", &ch);

	if (ch == 1) {
		float celsius;
		printf("Enter celsius: ");
		scanf("%f", &celsius);
		first(celsius);
	} else if (ch == 2) {
		int l, w;
		printf("Enter length and width: ");
		scanf("%d%d", &l, &w);
		second(l, w);
	} else if (ch == 3) {
		int num;
		printf("Enter three-digit number: ");
		scanf("%d", &num);
		third(num);
	} else if (ch == 4) {
		int num;
		printf("Enter number: ");
		scanf("%d", &num);
		forth(num);
	} else if (ch == 5) {
		int salary;
		printf("Enter salary: ");
		scanf("%d", &salary);
		fifth(salary);
	} else if (ch == 6) {
		int age;
		char gender;
		printf("Enter age and gender (M/F): ");
		scanf("%d %c", &age, &gender);
		sixth(age, gender);
	} else {
		printf("Invalid choice");
	}
}

