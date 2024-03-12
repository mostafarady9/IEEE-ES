#include<stdio.h>
void fun_in(int arr[]);
int n;
int main()
{
	int arr[10];
	printf("How many number do u want : ");
	scanf("%d",&n);
	fun_in(arr);
}
void fun_in(int arr[])
{
for(int i=0;i<n;++i)
{
    printf("Enter element --%d :",i+1);
	scanf("%d",&arr[i]);
}	
printf("Elements in forward way: \n");
for(int i=0;i<n;++i)
{
	printf(" %d ",arr[i]);
}
	printf("\n Elements in reverse way: \n");
for (int i=n-1;i>=0;--i)
{
	printf(" %d ",arr[i]);	
}
}