#include <stdio.h>

int main() {
	double first,second,temp;
	
	printf("enter first value: ");
	scanf("%lf", &first);
	
	printf("enter second value: ");
	scanf("%lf", &second);
	temp=first;
	first=second;
	second=temp;
	
	printf("\nafter swapping:\n");
	printf("first value = %.2lf\n", first);
	printf("second value = %.2lf\n", second);
	return 0;
}
