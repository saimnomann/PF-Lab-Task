#include<stdio.h>
int main(){
	int num,ld;
	printf("Please enter the number");
	scanf("%d",&num);
	ld=num%10;
	ld == 0?printf("Last Digit is zero"):printf("Last Digit is non zero");
}