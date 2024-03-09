#include<stdio.h>
void oddover(int x);
int main(){
int num;
printf("Enter the number :");
scanf("%d",&num);
oddover(num);
}
void oddover(int x){
	if(x%2){
		printf("the num is odd.");	
	}
	else {
		printf("the num is even.");
	}
}