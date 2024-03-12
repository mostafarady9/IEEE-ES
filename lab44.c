#include<stdio.h>
void arr_in (int arr[]);
void sort(int arr[]);
int arr[100];
int ele_num;
int main()
{
	printf("Enter element number: ");
	scanf("%d",&ele_num);
	arr_in(arr);
	sort(arr);
	printf("the second largest number :\n %d  ",arr[ele_num-2]);
}
void arr_in(int arr[])
{
	for(int i=0;i<ele_num;++i)
	{
		printf("Enter element --%d :",i+1);
		scanf("%d",&arr[i]);
	}
}
void sort(int arr [])
{
	int temp;
	for(int i=0 ;i<ele_num;++i)
	{
		for(int j=0;j<ele_num;++j)
		{
		if(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}		
		}
	}
}