#include<stdio.h>
int main(){
	char type,size;
	int step1,step2,step3,step4,step5;
	printf("Please enter the type of coffee you want");
	scanf(" %c",&type);
	printf("Please enter the size of coffee");
    scanf(" %c",&size);
	switch(type){
		case 'W':
			switch(size){
				case 'D':
					step1=(15*150)/100;
					step2=(15*150)/100;
					step3=(20*150)/100;
					step4=(2*150)/100;
					step5=20*150/100;
					break;
			}
			switch(size){
				case 'N':
					step1=15;
					step2=15;
					step3=20;
					step4=2;
					step5=20;
					break;
					
			}
		case 'B':
				switch(size){
				case 'D':
					step1=(15*150)/100;
					step2=(15*150)/100;
					step3=(20*150)/100;
					step4=(2*150)/100;
					step5=20*150/100;
					break;
			}
			switch(size){
				case 'N':
					step1=15;
					step2=15;
					step3=20;
					step4=2;
					step5=20;
					break;
					
			}
			printf("The time taken is %d",step1+step2+step3+step4+step5);
			
}
			
	}
