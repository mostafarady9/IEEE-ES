#include<stdio.h>
int main(){
	int num1;
	int num2;
	int operation;
	printf("enter frist num: ");
	scanf("%d",&num1);
	printf("enter second num: ");
	scanf("%d",&num2);
	printf("enter operation: ");
	scanf("%d",&operation);
	switch(operation)
	{
		case 1:
		printf("%d+%d=%d",num1,num2,num1+num2);
		break;
		case 2:
		printf("%d-%d=%d",num1,num2,num1-num2);
		break;
		case 3:
		printf("%d+%d=%d",num1,num2,num1*num2);
		break;
		case 4:
		printf("%d+%d=%d",num1,num2,num1/num2);
		break;
	}
}