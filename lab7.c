#include<stdio.h>
int main(){
	int num_1,num_2;
	printf("Enter frist number:");
	scanf("%d",&num_1);
	printf("Enter second number:");
	scanf("%d",&num_2);
	if(num_1==num_2){
		printf("%d and %d are equal.",num_1,num_2);
	}else{
		printf("%d and %d arent equal.",num_1,num_2);
	}
}