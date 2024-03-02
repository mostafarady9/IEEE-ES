#include<stdio.h>
int main(){
	int num1;
	int num2;
	printf("enter frist num: ");
	scanf("%d",&num1);
	printf("enter second num: ");
	scanf("%d",&num2);
	switch(num1>num2)
	{
	case 0:
	printf("%d",num2);
	break;
	case 1:
	printf("%d",num1);
	break;
	}
	return 0;
}