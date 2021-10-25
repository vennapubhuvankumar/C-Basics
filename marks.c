#include<stdio.h>
void  main()
{
	int phy, che, mat, eng, tot;
	//intialization
	phy=60;
	che=50;
	mat=70;
	eng=40;
	//calculations
	
	tot=phy+che+mat+eng;
	//output
	printf("marks in physics: %d\n", phy);
	printf("marks in cmeistry: %d\n", che);
	printf("marks in maths: %d\n", mat);
	printf("marks in english: %d\n", eng);
	printf("total: %d", tot);
	
}
