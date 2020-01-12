#include<stdio.h>
void main(){
	float p,r,t;
	float si;
	printf("Enter principle, rate & time: ");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("Simple Interest: %f",si);
}
