#include<stdio.h>
int main(){
	int num,result ;
	printf("Enter the number :");
	scanf("%d",&num);
	result= (num%2==0)?printf("number is even"):printf("number is odd");
}