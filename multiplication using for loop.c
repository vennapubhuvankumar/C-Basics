#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number");
	scanf("%d",&n);
	printf("multiplication table for %d is",n);
	for(i=1;i<=20;i++)
	{
		printf("%d*%d = %d\n",n,i,(i*n));
	}
}
