#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main()
{
	float a,area,diameter,circumference;
	printf("\n enter the values of radius of a circle");
	scanf("%f",&a);
	area=pi*a*a;
	printf("\n area of the circle= %f",area);
	diameter=a*2;
	printf("\n diameter of a circle= %f",diameter);
	circumference=2*pi*a;
	printf("\n circumference of a circle= %f",circumference);
	return 0;
}
