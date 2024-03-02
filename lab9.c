#include<stdio.h>
int main (){
	int num1,num2,num3;
	printf("enter the frist num:");
	scanf("%d",&num1);
	printf("enter the second num:");
	scanf("%d",&num2);
	printf("enter the thrid num:");
	scanf("%d",&num3);
	if((num1==num2)&&(num2==num3))
		printf("the triangle is equilateral. ");
	else if((num1==num2)||(num2==num3)||(num3==num1))
		printf("the triangle is Isosceles. ");
	else printf("the triangle is scalene. ");
}