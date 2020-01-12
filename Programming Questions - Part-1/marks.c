#include<stdio.h>
void main(){
	float a,b,c,d,e;
	float sum,percentage;
	printf("Enter marks in 5 subjects(out of 100): ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	sum = a+b+c+d+e;
	percentage = (sum/500)*100;
	printf("sum: %f, percentage: %f",sum,percentage);
}
