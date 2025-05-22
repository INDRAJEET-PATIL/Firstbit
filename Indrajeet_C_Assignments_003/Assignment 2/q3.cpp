#include <stdio.h>

int main() {
    int n1 = 20, n2 = 0; 
    char op ='/';      

   
    if (op == '+') {
        printf("Result: %d\n", n1 + n2);
    } else {
        if (op == '-') {
            printf("Result: %d\n", n1 - n2);
        } else {
            if (op == '*') {
                printf("Result: %d\n", n1 * n2);
            } else {
                if (op == '/') {
                    if (n2 != 0) {
                        printf("Result: %d\n", n1 / n2);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                } else {
                    if (op == '%') {
                        if ((int)n2 != 0) {
                            printf("Result: %d\n", (int)n1 % (int)n2); 
                        } else {
                            printf("Error: Division by zero is not allowed.\n");
                        }
                    } else {
                        printf("Error: Invalid operator.\n");
                    }
                }
            }
        }
    }

    return 0;
}
