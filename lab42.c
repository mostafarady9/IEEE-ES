#include<stdio.h>
int num;
int arr[100];
void Dec2Bin(int num);
int main()
{
	printf("Enter number to convert: ");
	scanf("%d",&num);
	Dec2Bin(num);
}
void Dec2Bin(int num)
{
	int i=0;
	while(num)
	{
		if(num%2)
		{
			arr[i]=1;
		}
		else
		{
			arr[i]=0;
		}
		i++;
		num=num/2;
	}		
	for(int j=i-1;j>=0;--j )
	{
		printf("%d",arr[j]);
	}
}