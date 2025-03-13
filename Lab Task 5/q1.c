#include<stdio.h>
int main(){
    float fat_cal,fat_gram,total_cal;
	printf("Please enter the number of calories and fat present in the food");
	scanf("%f %f",&total_cal,&fat_gram);
	if(fat_gram>=0 && total_cal>=0){
		fat_cal=fat_gram*9;
		if(fat_cal<=total_cal)
		{
		fat_cal=fat_cal/total_cal;
		printf("The percentage of calorie from fat is %f ",fat_cal);
		}
		else{
			printf("Calories or fat are entered incorrectly");
		}}
		else{
			printf("Please enter correct number of calories and fat present");
		}
	
}