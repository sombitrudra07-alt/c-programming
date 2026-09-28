#include <stdio.h>
int main() {
    float units, bill_amount = 0;
    printf("Enter the number of units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Units consumed cannot be negative.\n");
        return 1;
    }
    if (units <= 100) {
        bill_amount = units * 2;
    } 
    else if (units <= 200) {
        bill_amount = (100 * 2) + ((units - 100) * 3);
    } 
    else if (units <= 300) {
        bill_amount = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    } 
    else {
        bill_amount = (100 * 2) + (100 * 3) + (100 * 5) + ((units - 300) * 7);
    }
    printf("\nTotal Units Consumed: %.2f\n", units);
    printf("Total Electricity Bill: RS. %.2f\n", bill_amount);
    return 0;
}

