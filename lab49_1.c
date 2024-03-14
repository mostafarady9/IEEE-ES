#include<stdio.h>
void sum(int *ptr_n_1,int *ptr_n_2,int *sum_ret);
int main()
{
	int sum_1;
	int num_1,num_2;
	printf("enter frist num: ");
	scanf("%d",&num_1);
	printf("enter second num: ");
	scanf("%d",&num_2);
	sum(&num_1,&num_2,&sum_1);
	printf("%d",sum_1);
	return 0;
}
void sum(int *ptr_n_1,int *ptr_n_2,int *sum_ret)
{
	*sum_ret =*(ptr_n_1)+*(ptr_n_2); 
}