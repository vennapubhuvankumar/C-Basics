#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("1.Arithmetic \n2.Relational\n3.Bitwise\n4.logical\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("enter your choice\n1.+\n2.-\n3.*\n4./\n5.%%\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					printf("%d",a+b);
					break;
					case 2:
						printf("%d",a-b);
						break;
						case 3:
							printf("%d",a*b);
							break;
							case 4:
								printf("%d",a/b);
								break;
								case 5:
									printf("%d",a%b);
									break;
			}
			break;
			case 2:
				printf("choose one option\n1.<\n2.>\n3.<=\n4.>=\n5.==\n");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						printf("%d",a<b);
						break;
						case 2:
							printf("%d",a>b);
							break;
							case 3:
								printf("%d",a<=b);
								break;
								case 4:
									printf("%d",a>=b);
									break;
									case 5:
										printf("%d",a==b);
										break;
				}
				break;
				
				case 3:
					printf("choose one option\n1.&\n2.|\n3.^\n");
					scanf("%d",&f);
					switch(f)
					{
						case 1:
							printf("%d",a&b);
							break;
							case 2:
								printf("%d",a|b);
								break;
								case 3:
								printf("%d",a^b);
								break;
					}
					break;
					case 4:
						printf("choose one option\n1.&&\n2.||\n");
						scanf("%d",&g);
						switch(g)
						{
							case 1:
								printf("%d",a&&b);
								break;
								case 2:
									printf("%d",a||b);
									break;
						}
						break;
				
			
	}
}
