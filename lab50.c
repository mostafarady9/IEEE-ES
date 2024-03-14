#include<stdio.h>
int max(int *ptr_1,int *ptr_2);
int main()
{
	int num_1;
	int num_2;
	printf("Enter first num : ");
	scanf("%d",&num_1);
	printf("Enter second num : ");
	scanf("%d",&num_2);
	printf("max num of them is : %d",sum(&num_1,&num_2));
}
int sum(int *ptr_1,int *ptr_2)
{
	if(*ptr_1> *ptr_2)
	{
		return *ptr_1;
	}
	else
	{
		return *ptr_2;
	}
}