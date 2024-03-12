#include<stdio.h>
int arr_in(int arr[]);
int arr_max(int arr []);
int arr_min(int arr[]);
int num_ele;
int main()
{
	int arr[300];
	printf("Enter number of elements: ");
	scanf("%d",&num_ele);
	arr_in(arr);
	printf("max value is :%d\n",arr_max(arr));
	printf("min value is : %d",arr_min(arr));
	
}
int arr_in(int arr [])
{
	for(int i=0;i<num_ele;++i)
	{
		printf("Element --%d :",i+1);
		scanf("%d",&arr[i]);
	}
}
int arr_max(int arr [])
{
	int num_max;
	for (int i=0;i<num_ele;++i)
	{
		for(int j=0;j<num_ele;++j)
		{
			if((arr[i]>arr[j])&&(num_max<arr[i]))
			{
				num_max=arr[i];
			}
		}
	}
	return num_max;
}
int arr_min(int arr[])
{
	int min_arr=arr[0];
	for(int i=0;i<num_ele;++i)
	{
		for(int j=0;j<num_ele;++j)
		{
			if((arr[i]<arr[j])&&(arr[i]<min_arr))
			{
				min_arr=arr[i];
			}
		}
	}
	return min_arr;
}