//write a c program to reverse the digits of a whole no
#include <stdio.h>

int main() {
    int num, remainder;
    int reversedNum = 0;
    printf("Enter a whole number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;         
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                    
    }
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

