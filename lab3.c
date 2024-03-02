#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter frist num :");
	scanf("%d",&num1);
	printf("enter second num :");
	scanf("%d",&num2);
	printf ("%d+%d=%d\n",num1,num2,num1+num2);
	printf ("%d-%d=%d\n",num1,num2,num1-num2);
	printf ("%d*%d=%d\n",num1,num2,num1*num2);
	printf ("%d/%d=%d\n",num1,num2,num1/num2);
	printf ("reminder =%d",num1%num2);
}