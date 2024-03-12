#include<stdio.h>
int sum_fun(int arr[]);
int n;
int main()
{
	int arr[40];
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("the sum of arry is : %d",sum_fun(arr));
}
int sum_fun(int arr[])
{
	int sum=0;
	for(int i=0;i<n;++i) 
	{
		printf("Enter element --%d :",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	return sum;
}