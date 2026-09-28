
//write a c program 2+5+8+11+14+... upto n terms w.c.p to  calculate sum of given numbers using whileloop
#include <stdio.h>
int main() {
    int n, i = 1, term = 2, sum = 0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    while (i <= n) {
        sum += term;    
        term += 3;      
        i++;            
    }
// Display the result
    printf("The sum of the  series up to %d terms is: %d\n", n, sum);
    return 0;
}

