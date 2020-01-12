#include<stdio.h>
void main(){
	int n,r,a=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>=1){
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	printf("Reversed number: %d",r);
}
