#include <stdio.h>

int main() {
    double purchase_amount, discount_rate, discount_amount, net_payable;

    printf("Enter the purchase amount: ");
    if (scanf("%lf", &purchase_amount) != 1 || purchase_amount < 0) {
        printf("Invalid input. Please enter a valid positive amount.\n");
        return 1;
    }

    if (purchase_amount > 10000) {
        discount_rate = 0.10; 
    } else {
        discount_rate = 0.05;
    }
    discount_amount = purchase_amount * discount_rate;
    net_payable = purchase_amount - discount_amount;
    printf("\n--- Receipt Summary ---\n");
    printf("Purchase Amount : %.2lf\n", purchase_amount);
    printf("Discount Given  : %.2lf (%.0f%%)\n", discount_amount, discount_rate * 100);
    printf("Net Payable     : %.2lf\n", net_payable);

    return 0;
}

