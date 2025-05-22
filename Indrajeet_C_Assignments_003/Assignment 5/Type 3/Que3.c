#include<stdio.h>

void first(int start, int end) {
    int i = start;
    while (i <= end) {
        printf("%d \n", i);
        i++;
    }
}

void second(int num) {
    int i = 1, table;
    while (i <= 10) {
        table = num * i;
        printf("%d \n", table);
        i++;
    }
}

void third(int num) {
    int i = 1, sum = 0;
    while (i <= num) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
}

void forth(int num) {
    int flag = 0, i = 2;
    while (i < num) {
        if (num % i == 0) {
            flag = 1;
        }
        i++;
    }
    if (flag == 0) {
        printf("Number is prime\n");
    } else {
        printf("Number is not prime\n");
    }
}

void fifth(int num) {
    int rem, sum = 0, no = num, i = 0, num2;
    num2 = num;
    while (no > 0) {
        no /= 10;
        i++;
    }
    while (num2 > 0) {
        int j = i, power = 1;
        rem = num2 % 10;
        num2 /= 10;
        while (j > 0) {
            power *= rem;
            j--;
        }
        sum += power;
    }
    if (num == sum) {
        printf("Number is an Armstrong number\n");
    } else {
        printf("Number is not an Armstrong number\n");
    }
}

void sixth(int num) {
    int i = 1, sum = 0;
    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }
    if (num == sum) {
        printf("Number is a perfect number\n");
    } else {
        printf("Number is not a perfect number\n");
    }
}

void seventh(int num) {
    int i = num, fact = 1;
    while (i > 0) {
        fact *= i;
        i--;
    }
    printf("Factorial of the given number is %d\n", fact);
}

void eighth(int num) {
    int rem, no = num, sum = 0;
    while (no > 0) {
        rem = no % 10;
        int i = rem, fact = 1;
        while (i > 0) {
            fact *= i;
            i--;
        }
        sum += fact;
        no /= 10;
    }
    if (num == sum) {
        printf("Number is a Strong Number\n");
    } else {
        printf("Number is not a Strong Number\n");
    }
}

void nineth(int num) {
    int rem, no, rev = 0;
    no = num;
    while (no > 0) {
        rem = no % 10;
        rev = rev * 10 + rem;
        no /= 10;
    }
    if (num == rev) {
        printf("Number is a palindrome number\n");
    } else {
        printf("Number is not a palindrome number\n");
    }
}

void tenth(int num) {
    int ld, fd = num, sum;
    ld = num % 10;
    while (fd >= 10) {
        fd /= 10;
    }
    sum = fd + ld;
    printf("Sum of first and last digit is %d\n", sum);
}

void main() {
    int ch;
    printf("Enter your choice\n 1.print numbers 1 to 10 \n 2.print table for the given number \n 3.calculate the sum of numbers in the given range \n 4.check the number is prime or not \n 5.check the number is armstrong or not \n 6.check the number is perfect or not \n 7.find the factorial of the number \n 8.check the number is strong or not \n 9.check the number is palindrome or not \n 10.add the first and last digit of the given number \n");
    scanf("%d", &ch);
    if (ch == 1) {
        first(1, 10);
    } else if (ch == 2) {
        second(7);
    } else if (ch == 3) {
        third(12);
    } else if (ch == 4) {
        forth(11);
    } else if (ch == 5) {
        fifth(153);
    } else if (ch == 6) {
        sixth(6);
    } else if (ch == 7) {
        seventh(4);
    } else if (ch == 8) {
        eighth(12);
    } else if (ch == 9) {
        nineth(33433);
    } else if (ch == 10) {
        tenth(741852963);
    } else {
        printf("Invalid choice\n");
    }
}
