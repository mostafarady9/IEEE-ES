#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	int * ptr_n1;
	int * ptr_n2;
	ptr_n1=&num_1;
	ptr_n2=&num_2;
	printf("enter first num: ");
	scanf("%d",ptr_n1);
	printf("enter second num: ");
	scanf("%d",ptr_n2);
	printf("%d",(*ptr_n1)+(*ptr_n2));
	return 0;
	
}