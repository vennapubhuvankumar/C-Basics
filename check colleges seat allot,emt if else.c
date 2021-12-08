#include<stdio.h>
void main()
{
	int n;
	printf("Enter your rank to check whether in which college your seat will be alloted");
	scanf("%d",&n);
	
	if(n<=200)
	{
		printf("you will get a seat in Andhra university\n");
		printf("you will get a seat in JNTU kakinada\n");
			printf("you will get a seat in Adhikavi nannaya university\n");
	}
	if(n>=0 && n<=700)
	{
		printf("you will get a seat in Aditya engineering college\n");
			printf("you will get a seat in SV college of engineering\n");
	}
	if(n>=0 && n<=700)
	{
		printf("you will get a seat in MVGR college of engineering\n");
		printf("you will get a seat in JNTUA college of engineering\n");
	}
	 if(n>=0 && n<=1200)
	{
		printf("you will get a seat in Gayatri college of engineering\n");
		printf("you will get a seat in Vikas institute of technology\n");
	}
	 if(n>=0 && n<=1500)
	{
		printf("you will get a seat in Raghu institute of technology\n");
	printf("you will get a seat in Giet institute of technology\n");
	}
	 if(n>=0 && n<=2000)
	{
		printf("you will get a seat in Vsm college of engineering ");
		printf("you will get a seat in pydah college of engineering");
	}
	else
	{
		printf("you will not get a seat in any of the college");
	}
}
