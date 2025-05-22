#include <stdio.h>

int main() {
    int a = 15, b = 25, c = 10;  // Hardcoded numbers
    int greatest;

    if (a > b) {
        if (a > c) {
            greatest = a;  // a is greatest
        } else {
            greatest = c;  // c is greatest
        }
    } else {
        if (b > c) {
            greatest = b;  // b is greatest
        } else {
            greatest = c;  // c is greatest
        }
    }

    printf("Greatest number is: %d\n", greatest);
    return 0;
}
