#include<stdio.h>
int main(){
	int num_1,num_2,num_3,clear,toggle;
	printf("Enter the frist number :");
	scanf("%d",&num_1);
	printf("Enter the second number :");
	scanf("%d",&num_2);
	printf("Enter the third number :");
	scanf("%d",&num_3);
	printf("frist output is %i \n",num_1|1);
	clear =1<<1;
	printf("second output is %i \n",num_2&(~clear));
	toggle = 1<<2;
	printf("third output is %i \n",num_3^toggle);
}