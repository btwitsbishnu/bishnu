#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	int op;
	
	printf("Enter any two numbers: ");
	scanf("%f%f",&a,&b);
	printf("1.Addition \n");
	printf("2.Subtraction \n");
	printf("3.Multiplication \n");
	printf("4.Division \n");
	
	printf("enter your choice: ");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("sum of %f and %f is: %f",a,b,a+b);
			break;
			case 2:
				printf("subtraction of %f and %f is: %f",a,b,a-b);
				break;
				case 3:
					printf("multiplicaton of %f and %f is: %f",a,b,a*b);
					break;
					case 4:
					printf("division of %f and %f is: %f",a,b, a/b);	
					break;
					default:
						printf("choose correctly");
						break;
}return 0;
					
}
