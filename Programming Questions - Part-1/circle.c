#include<stdio.h>
void main(){
	float r,circumference,area;
	float pi=3.14;
	printf("Enter radius: ");
	scanf("%f",&r);
	circumference = 2*pi*r;
	area = pi*r*r;
	printf("circumference: %f, area: %f",circumference,area);
}
