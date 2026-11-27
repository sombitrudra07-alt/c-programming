
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the SIZE OF the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("\nThe largest number in the array is: %d\n", largest);

    return 0;
}

