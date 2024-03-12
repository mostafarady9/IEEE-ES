#include<stdio.h>
void swap(int arr1[],int arr2[]);
int arr1[] ={1,2,3};
int arr2[] ={9,8,7};
int main(){
	swap(arr1,arr2);
}
void swap(int arr1[],int arr2[]){
	if(sizeof(arr1)==sizeof(arr2))
	{
		for(int i=0; i<=(sizeof(arr1));++i)
		{
        arr1[i]=arr1[i]^arr2[i];//110^101=011
        arr2[i]=arr2[i]^arr1[i];//011^101=110
		arr1[i]=arr1[i]^arr2[i];//011^110=101
		}
		for(int i =0;i<=sizeof(arr1);++i)
		{
			printf("%d %d \n",arr1[i],arr2[i]);
		}
	}
	else{
		printf("invaild input.");
	}
}