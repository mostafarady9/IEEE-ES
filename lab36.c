#include<stdio.h>
void arr_freq(int arr[]);
	int n;
	int main()
	{
		int arr[10];
		printf("Enter how many elements do u want: ");
		scanf("%d",&n);
		arr_freq(arr);
		return 0;
	} 
	
	void arr_freq(int arr[])
	{
		int freq_detect[10]={0};
		for(int i=0;i<n;++i)
		{
			printf("Enter element --%d :",i+1);
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(arr[i]==arr[j])
				{
					freq_detect[i]++;
					
				}
			}
		}
		for(int i=0 ;i<n;++i)
		{
			printf("%d occur %d times.\n",arr[i],freq_detect[i]);
		}
	}