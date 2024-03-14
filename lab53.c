#include<stdio.h>
void arr_in(int *ptr);
void swap(int * ptr_swap);
void arr_printf(int *ptr_printf);
int arr[100];
int num;
int main()
{
	printf("Enter size of arry :");
	scanf("%d",&num);
	arr_in(arr);
	swap(arr);
	arr_printf(arr);
		return 0;
}
void arr_in(int *ptr)
{
	for (int i=0;i<num;++i)
	{
		printf("enter element --%d: ",i+1);
		scanf("%d",ptr+i);
	}
}
void swap(int *ptr_swap)
{
	int temp;
	for (int i=0 ;i<num;++i)
	{
		for (int j=0; j<num;++j)
		{
			temp = *(ptr_swap+i);
			*(ptr_swap+i)=*(ptr_swap+j);
			*(ptr_swap+j)=temp;
		}
	}
}
void arr_printf(int*ptr_printf)
{
	for(int i =0;i<num;++i)
	{
		printf("element num --%d : %d \n",i+1,*(ptr_printf+i));
	}
}