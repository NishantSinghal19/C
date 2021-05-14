#include<stdio.h>

int main(){
	int a,b , temp;
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("swap=1.%d 2.%d",a,b);
	return 0;
}
