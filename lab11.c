#include<stdio.h>
int main(){
	int grade;
	printf("enter ur grade number:");
	scanf("%d",&grade);
	if ((grade>=85)&&(grade<=100)){
		printf ("ur grade is exellent.");
	}else if((grade>=75)&&(grade<=85)){
		printf ("ur grade is very good.");
	}else if((grade>=65)&&(grade<=75)){
		printf ("ur grade is good.");
	}else if((grade>=50)&&(grade<=65)){
		printf ("ur grade is passed.");
	}else if((grade <50)&&(grade>=0)){
		printf ("ur grade is very good.");
	}else {
		printf("error");
		}
}