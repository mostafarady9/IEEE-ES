#include<stdio.h>
void arr_in(int arr[]);
void del_ele();
void arr_in(int arr[]);
void arr_print(int arr[]);
int ele_num;
int arr[100];
int del_pos;
int main()
{
	printf("Enter number of element: ");
	scanf("%d",&ele_num);
	arr_in(arr);
	del_ele();
	arr_print(arr);
}
void arr_in(int arr[])
{
	for (int i=0;i<ele_num;++i)
	{
		printf("Enter element --%d :",i+1);
		scanf("%d",&arr[i]);
	}
}
void del_ele()
{
	printf("Enter pos u want to delete: ");
	scanf("%d",&del_pos);
	for(int i=del_pos-1;i<ele_num;++i)
	{
		arr[i]=arr[i+1];
	}
}
void arr_print(int arr [])
{
	printf("the new list is :");
	for(int i=0;i<ele_num-1;++i)
	{
		printf(" %d ",arr[i]);
	}
}