#include<stdio.h>
/*void arr_in(int arr[100][]);
void arr_printf(int arr[100][]);*/
int arr[100][100];
int raw_num;
int col_num;
int main()
{
	printf("enter number of raws:");
	scanf("%d",&raw_num);
	printf("enter number of colums:");
	scanf("%d",&col_num);
	for(int i=0;i<raw_num;++i)
	{
		for(int j=0;j<col_num;++j)
		{
			printf("element [%d] [%d]: ",i+1,j+1);
			scanf("%d",&(arr[i][j]));
		}
	}
for(int i=0;i<raw_num;++i)
	{
		for(int j=0;j<col_num;++j)
		{
		printf(" %i",arr[i][j]);
		}
	printf("\n");
	}
}
/*void arr_in(int arr[100][])
{
	
}
void arr_printf(int arr[100][])
{
	
	
}*/