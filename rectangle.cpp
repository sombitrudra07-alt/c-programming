#include <stdio.h>
int main()
{
	float l,b, area,peri;
	printf("Enter length of rectangle");
	scanf("%f",&l);
	printf("Enter breadth of rectangle");
	scanf("%f", &b);
	area=l*b;
	peri=2*(l+b);
	printf("\n area is=%.3f",area);
	printf("\n perimeter is=%.2f", peri);
	return 0;
	
	
	
}
