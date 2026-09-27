#include<stdio.h>

int a,b;
int main(void){
	printf("Enter your numbers :");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Sum is %d",a+b);
	return 0;

}
