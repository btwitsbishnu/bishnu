#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number to check even or odd");
	scanf("%d",&n);
	switch(n%2)
	{
		case 0:
			printf("the Number u have entered is even :)");
			break;
			case 1:
				printf("the Number u have entered is odd :)");
				break;
	}
	return 0;
}
