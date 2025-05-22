#include <stdio.h>

int main() {
    
    double num1 = 10, num2 = 20; 
    char operator = '*';        


    if (operator == '+') {
        printf("Result: %.2lf\n", num1 + num2);
    } else {
        if (operator == '-') {
            printf("Result: %.2lf\n", num1 - num2);
        } else {
            if (operator == '*') {
                printf("Result: %.2lf\n", num1 * num2);
            } else {
                if (operator == '/') {
                    //if (num2 != 0) {
                        printf("Result: %.2lf\n", num1 / num2);
                    } //else {
                        //printf("Error: Division by zero is not allowed.\n");
                    }
                }
                    if (operator == '%') {
                        //if ((int)num2 != 0) {
                          //  printf("Result: %d\n", (int)num1 % (int)num2);
                        } //else {
                           // printf("Error: Division by zero is not allowed.\n");
                        }
                    } 
					else {
                        printf("Error: Invalid operator.\n");
                    }
                }
            }
        }
    }

    return 0;
}
