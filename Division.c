#include<stdio.h>

int main(){
	int a,b, Quotient, Remainder;
	printf("Enter Divedend");
	scanf("%d",&a);
	printf("Enter Divisor");
	scanf("%d",&b);
	Quotient= a/b;
	Remainder=a%b;
	printf("Quotient=%d",Quotient);
	printf("Remainder=%d",Remainder);
	getch();
}
