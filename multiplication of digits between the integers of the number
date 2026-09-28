#include <stdio.h>
int main() {
    int num, original_num, product = 1, remainder;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    original_num = num; 
    if (num < 0) {
        num = -num;
    } 
    if (num == 0) {
        product = 0;
    } else {
        while (num > 0) {
            remainder = num % 10;          product = product * remainder; 
           num = num / 10;              
        }
    }
    printf("The product of the digits of %d is: %d\n", original_num, product);
    return 0;
} 
