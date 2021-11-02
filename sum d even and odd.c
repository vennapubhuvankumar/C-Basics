#include<stdio.h>
void main()
{
	int n,sn,se,so;
	
	n=5;
	sn=n*(n+1)/2;
	se=n*(n+1);
	so=n*n;
	
	printf("sum of first %d natural numbers is %d\n",5,sn);
	printf("sum of first %d even natural numbers is %d\n",n,se);
	printf("sum of first %d odd natural numbers is %d", n,so);
}
