#include<stdio.h>
void arr_in(int arr[]);
void arr_printf(int arr[]);
int arr[100];
int num;
int main()
{
	printf("Enter size of arry :");
	scanf("%d",&num);
	arr_in(arr);
	arr_printf(arr);
}
void arr_in (int *ptr_arr)
{
	for (int i=0;i<num;++i)
	{
	printf("enter element --%d :",i+1 );
	scanf("%d",ptr_arr+i);
	}

}
void arr_printf(int *ptr)
{
	for(int i=0;i<num;++i)
	{
		printf("element num -- %d :%d\n",i+1,*(ptr+i));
	}
}