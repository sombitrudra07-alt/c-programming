#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("its a positive number and even too");	
	}
    else
    {
    	printf("its a positive number and odd too");
	}
}
 else if (a<0)
{
	printf("its a negative number");
}
else
{
	printf("its a neutral number");
}
return0;
