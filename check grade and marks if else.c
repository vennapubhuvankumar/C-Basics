#include<stdio.h>
void main()
{
	int eng,maths,phy,che,cs,perc;
	printf("Enter your subject marks to check fail or pass");
	scanf("%d%d%d%d%d",&eng,&maths,&phy,&che,&cs);
	perc=(eng+maths+che+phy+cs)*1.0/5;
	if(eng>=35 && maths>=35 && phy>=35 && che>=35 && cs>=35)
	{
		printf("pass\n");
	}
	
	if(perc>=90)
	{
		printf("A\n");
	}
	else if(perc>=80)
	{
		printf("B");
	}
	else if(perc>=70)
	{
		printf("C");
	}
	else if(perc>=60)
	{
		printf("D");
	}
	
	else
	{
		printf("fail");
	}
	}
