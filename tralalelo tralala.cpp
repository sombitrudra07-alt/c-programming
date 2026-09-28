#include<stdio.h>
int main()
{
	int a,b,c,temp;
	printf("enter a three number:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if((a>b))&(a>c))
	temp=a;
	else if((b>c)&&(b>a))
	temp=b;
	else
	temp=c;
	printf("the greatest number is: %d",temp);
}
