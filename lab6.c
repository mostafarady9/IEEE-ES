#include<stdio.h>
int main(){
	int num_1,num_2;
	printf("Enter frist number :");
	scanf("%d",&num_1);
	printf("Enter second number :");
	scanf("%d",&num_2);
	if(num_1>num_2){
		printf("%d is biggest. \n",num_1);
	}else{
		printf("%d is biggest. \n",num_2);
	}
}