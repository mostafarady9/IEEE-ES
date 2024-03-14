#include<stdio.h>
void arr_in(int *ptr);
void swap(int*ptr);
int arr[10];
int num;
int main()
{
	printf("Enter size of arry : ");
	scanf("%d",&num);
	arr_in(arr);
	swap(arr);
	printf("second largest element of arry : %d ",*(arr+1));
	return 0;
}
void arr_in(int *ptr)
{
	for(int i=0;i<num;++i)
	{
		printf("enter element --%d: ",i+1);
		scanf("%d",ptr+i);
	}
}
void swap(int*ptr)
{
	int temp;
	for(int i =0;i<num;++i)
	{
		for(int j=0;j<num;++j)
		{
			if(*(ptr+i)>*(ptr+j))
			{
			temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
			
			}
		}
	}
}