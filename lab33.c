#include<stdio.h>
void fun_in(int arr[]);
int main(){
	int arr[10];
	fun_in(arr);
}
void fun_in(int arr[]){
	for (int i=0;i<=(sizeof(arr));++i)
	{
		printf("Enter the element --%d :",i+1);
	   scanf("%d",&arr[i]);
	}
	for (int i=0;i<=(sizeof(arr));++i)
	{
		printf("element -%d = %d\n",i+1,arr[i]);
	}
}