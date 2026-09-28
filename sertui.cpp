
#include <stdio.h>

int main() {
    int n;
    int current_term = 1;
    int sum = 0;

    // Prompt the user for the number of terms
    printf("Enter the number of terms (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("The series is: ");
    for (int i = 0; i < n; i++) {
        // Add the growing increment to get the current term
        current_term = current_term + i;
        
        // Print the current term
        printf("%d", current_term);
        if (i < n - 1) {
            printf(" + ");
        }

        // Add the current term to the total sum
        sum += current_term;
    }

    // Print the final result
    printf("\nSum of the series up to %d terms is: %d\n", n, sum);

    return 0;
}

