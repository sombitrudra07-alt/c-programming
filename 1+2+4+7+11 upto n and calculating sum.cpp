#include<stdio.h>
//write a c program 1+2+4+7+11+ ... upto n terms and calculate the sum of given series using while loop
#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    unsigned long long sum = 0;
    printf("Enter a number (N): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        fact *= i; 
        sum += fact; 
    }
    printf("The sum of factorials till %d is: %llu\n", n, sum);
    return 0;
}

