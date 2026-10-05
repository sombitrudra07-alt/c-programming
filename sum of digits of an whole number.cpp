#include <stdio.h>
int main() {
    int number, remainder, sum = 0;
    printf("Enter a whole number: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        remainder = number % 10;  
        sum = sum + remainder;    
        number = number / 10;    
    }
 printf("Sum of digits = %d\n", sum);
    return 0;
}

