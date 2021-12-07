#include<stdio.h>
void main()
{
	int a,b,c,d;
	 printf("enter four numbers\n");
	 scanf("%d%d%d%d",&a,&b,&c,&d);
	 
	 if(a>b && a>c && a>d)
	 {
	 	printf("%d is greater",a);
	 }
	 else if(b>c && b>d && b>a)
	 {
	 	printf("%d islargest",b);
	 }
	 else if(c>d && c>a && c>b)
	 {
	 	printf("%d",c);
	 }
	 else
	 {
	 	printf("%d is largest",d);
	 }
	 
}
