#include<stdio.h>
void main()
{
	int e,m,c,p,w,total,percentage;
	printf("Enter your marks to check pass or fail\n\n Enter english marks");
	scanf("%d",&e);
	printf("\nEnter maths marks");
	scanf("%d",&m);
	printf("\nEnter chemistry marks");
	scanf("%d",&c);
	printf("\nEnter physics marks");
	scanf("%d",&p);
	printf("\nEnter workshop marks");
	scanf("%d",&w);
	total=e+m+c+w+p;
	percentage=(e+m+c+w+p)*1.0/5;
	
	
	
	if(e>=35)
	{
		printf("\n\nhere's the result for your marks\nEnglish exam pass \n");
	}
	if(e<=35)
	{
		printf("\nhere's the result for your marks \nEnglish exam fail \n");
	}
	if(m>=35)
		{
			printf("Maths exam pass\n");
		}
		if(m<=35)
		{
			printf("Maths exam fail\n");
		}
		if(c>=35)
		{
			printf("Chemistry exam pass\n");
		}
		if(c<=35)
		{
			printf("Chemistry exam fail\n");
		}
		if(p>=35)
		{
			printf("Physics exam pass\n");
		}
		if(p<=35)
		{
			printf("Physics exam fail\n");
		}
		if(w>=35)
		{
			printf("C language exam pass\n");
		}
		if(w<=35)
		{
			printf("C language exam fail\n");
			printf("total marks you got is %d out of %d",total,500);
		}
		if(e>=35 && m>=35 && c>=35 && p>=35 && w>=35)
		{
			printf("\noverall pass percentage is %d",percentage);
		}
		
		else if(e<35 && m<35 && c<35 && p<35 && w<35)
		{
			printf("All subjects fail");	
		}
			else if(e<=35 || m<=35 || c<=35 || w<=35 || p<=35)
			{
				printf("You got failed in %d%d%d%d%d",e<35,c<35,m<35,p<35,w<35);
			}
	}
