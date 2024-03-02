#include<stdio.h>
int main(){
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if(num>0){
		printf("%d is postive. ",num);
	}else if(num<0){
		printf("%d is negative. ",num);
	}
}