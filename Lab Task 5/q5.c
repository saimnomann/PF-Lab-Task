#include<stdio.h>
int main(){
	float gpa;
	printf("Please enter your gpa");
	scanf("%f",&gpa);
	gpa>=0 && gpa<1 ? printf("Failed Semester"):gpa>=1 && gpa<2 ? printf("On probation for next semester"):gpa>=2 && gpa<3?
	printf("No message"):gpa>=3 && gpa<3.5? printf("Dean's list on next semester"):gpa>=3.5 && gpa<=4?printf("Highest honors for medal"):printf("Please enter correct gpa");
}