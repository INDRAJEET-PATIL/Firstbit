#include<stdio.h>

int first(int start, int end) {
	for (int i = start; i <= end; i++) {
		printf("%d\n", i);
	}
	return 0; 
}

int second(int num) {
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", num * i);
	}
	return 0;
}

int third(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	return sum;
}

int forth(int num) {
	if (num < 2) return 0; // Not prime
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return 0; // Not prime
		}
	}
	return 1; // Prime
}

int fifth(int num) {
	int original = num, sum = 0;
	int digits = 0;

	while (num > 0) {
		digits++;
		num /= 10;
	}

	num = original;
	while (num > 0) {
		int digit = num % 10, power = 1;
		for (int i = 0; i < digits; i++) {
			power *= digit;
		}
		sum += power;
		num /= 10;
	}

	return (sum == original);
}

int sixth(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return (sum == num);
}

int seventh(int num) {
	int fact = 1;
	for (int i = 2; i <= num; i++) {
		fact *= i;
	}
	return fact;
}

int eighth(int num) {
	int original = num, sum = 0;

	while (num > 0) {
		int digit = num % 10, fact = 1;
		for (int i = 1; i <= digit; i++) {
			fact *= i;
		}
		sum += fact;
		num /= 10;
	}

	return (sum == original);
}

int nineth(int num) {
	int original = num, reverse = 0;

	while (num > 0) {
		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}

	return (reverse == original);
}

int tenth(int num) {
	int lastDigit = num % 10;
	int firstDigit = num;

	while (firstDigit >= 10) {
		firstDigit /= 10;
	}

	return firstDigit + lastDigit;
}

int main() {
	int ch, num;
	printf("Enter your choice:\n");
	printf("1. Print numbers 1 to 10\n");
	printf("2. Print table for the given number\n");
	printf("3. Calculate the sum of numbers in the given range\n");
	printf("4. Check if the number is prime\n");
	printf("5. Check if the number is Armstrong\n");
	printf("6. Check if the number is perfect\n");
	printf("7. Find the factorial of the number\n");
	printf("8. Check if the number is strong\n");
	printf("9. Check if the number is palindrome\n");
	printf("10. Add the first and last digit of the given number\n");
	scanf("%d", &ch);

	if (ch == 1) {
		first(1, 10);
	} else if (ch == 2) {
		printf("Enter a number: ");
		scanf("%d", &num);
		second(num);
	} else if (ch == 3) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("Sum = %d\n", third(num));
	} else if (ch == 4) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("%s\n", forth(num) ? "Prime" : "Not Prime");
	} else if (ch == 5) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("%s\n", fifth(num) ? "Armstrong" : "Not Armstrong");
	} else if (ch == 6) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("%s\n", sixth(num) ? "Perfect" : "Not Perfect");
	} else if (ch == 7) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("Factorial = %d\n", seventh(num));
	} else if (ch == 8) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("%s\n", eighth(num) ? "Strong" : "Not Strong");
	} else if (ch == 9) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("%s\n", nineth(num) ? "Palindrome" : "Not Palindrome");
	} else if (ch == 10) {
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("Sum of first and last digit = %d\n", tenth(num));
	} else {
		printf("Invalid choice\n");
	}

	return 0;
}
