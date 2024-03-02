#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int result =(num>0)?printf("%d",num):printf("%d",num*(-1));
}