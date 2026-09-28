 
#include<stdio.h>
int main()
{
	float l,b,area,peri;
	printf("enter the length of a rectangle:");
	scanf("%f", &l);
	printf("enter the breadth of a rectangle:");
	scanf("%f", &b);
	area=l*b;
	peri=2*(l+b);
	printf("\n area of the rectangle=%.3f",area);
	printf("\n perimeter of the rectangle=%.2f",peri);
	return 0;
}
