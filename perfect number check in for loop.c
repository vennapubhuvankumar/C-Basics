#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("it is a perfect number");
	}
	else
	{
		printf("it is not a perfect number");
		
	}
	
}
