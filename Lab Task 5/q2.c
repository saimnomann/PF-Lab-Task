#include<stdio.h>
int main(){
int weekday,vacation;
printf("Please enter weekday in the form of 1 and 0");
scanf("%d",&weekday);
printf("Please enter vacation in the form of 1 and 0");
scanf("%d",&vacation);
if(weekday==0 || vacation==1){
	printf("You can sleep");
}
else{
	printf("You cannot sleep");
}
}