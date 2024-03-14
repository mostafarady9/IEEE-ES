#include<stdio.h>
int sum(int *ptr_n_1,int *ptr_n_2);
int main()
{
	int num_1,num_2;
	printf("enter frist num: ");
	scanf("%d",&num_1);
	printf("enter second num: ");
	scanf("%d",&num_2);
	printf("%d",sum(&num_1,&num_2));
	return 0;
}
int sum(int *ptr_n_1,int *ptr_n_2)
{
	return (*ptr_n_1)+(*ptr_n_2);
}