//Find the price of item when discount is given (specify different discount based on 
//price) 

#include <stdio.h>

int main() {
    float price = 800;  // Hardcoded price
    float discount, finalPrice;

    if (price > 1000) {
        discount = 20;  // 20% discount
    } else if (price > 500) {
        discount = 10;  // 10% discount
    } else {
        discount = 5;   // 5% discount
    }

    finalPrice = price - (price * discount / 100);

    printf("Original Price: %f\n", price);
    printf("Discount: %f%%\n", discount);
    printf("Final Price: %f\n", finalPrice);

    return 0;
}
