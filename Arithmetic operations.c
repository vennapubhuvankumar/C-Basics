#include<stdio.h>
void main()
{
	//variable declaration
	int a, b, sum , difference, product, quotient, remainder,n;
	a = 20;
	b = 4;
	sum = a+b;
	difference = a+b;
	product = a*b;
	quotient = a/b;
	remainder = a%b;
	n = sum+difference+product+quotient+remainder;
	printf("sum of  %d and %d  is %d\n", a,b,sum);
	printf("difference between %d and %d is %d\n",a,b,difference); 
	printf("product of %d and %d is %d\n",a,b,product);
	printf("quotient when %d is divided by %d is %d\n",a,b,quotient);
	printf("remainder when 10 is divided by %d is %d\n",a,b,remainder); 
	printf(" sum of all arithmetic operators is %d",n);
}
