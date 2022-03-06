#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10];
	char str2[10];
	
	printf("Enter two strings\n");
	gets(str1);
	gets(str2);
	
	printf("\nlength of the str1 is %d",strlen(str1));
	printf("\nlength of the str2 is %d",strlen(str2));
}
