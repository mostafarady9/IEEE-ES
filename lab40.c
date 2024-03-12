#include<stdio.h>
void sort_des(int arr[]);
void arr_in (int arr[]);
void arr_print(int arr[]);
int num_ele;
int main()
{
	int arr[300];
	printf("Enter number of element: ");
	scanf("%d",&num_ele);
	arr_in(arr);
	sort_des(arr);
	arr_print(arr);
}
void arr_in (int arr[])
{
	for(int i=0;i<num_ele;++i)
	{
		printf("Enter element --%d : ",i+1);
		scanf("%d",&arr[i]);
	}
}
void sort_des(int arr[])
{
	int temp;
	for(int i=0;i<num_ele;++i)
	{
		for(int j=0;j<num_ele;++j)
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
void arr_print(int arr[])
{
	for(int i=0;i<num_ele;++i)
	{
		printf(" %d ",arr[i]);
	}
}