#include <stdio.h>

int main() {
    int num1 = 20, num2 = 10; 
    int operator ='-';       

    if (operator== '+') {
        printf("Result: %d\n", num1 + num2);
    } 
	else {
        if (operator== '-') {
            printf("Result: %d\n", num1 - num2);
        } 
		else {
           if (operator== '*'){
           	printf("Result: %d\n", num1 * num2);
		   }
			else{
				if(operator== '/'){
					printf("Result: %d\n", num1 / num2);
					}
					else{
						if(operator=='%'){
							printf("Result: %d\n", num1 % num2);
						}
					}
				}
}
}
}