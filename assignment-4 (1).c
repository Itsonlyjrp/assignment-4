#include<stdio.h>
int main()
{
	float a,b,c;
 printf("enter an integer\n");
 scanf("%f",&a);
 printf("enter an integer\n");
 scanf("%f",&b);
	c=a+b;
	printf("a+b=%.2f\n",c);
	c=a-b;
	printf("a-b=%.2f\n",c);
	c=a*b;
	printf("a*b=%.2f\n",c);
	c=a/b;
	printf("a/b=%.2f\n",c);
	return 0;
}