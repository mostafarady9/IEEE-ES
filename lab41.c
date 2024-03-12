#include<stdio.h>
void fun(int arr1[],int a);
int main(){
	int arr1[5];
	int num;
	printf("enter numbers:");
	for(int i=0 ;i>sizeof(arr1)/4;++i){
		scanf("%d",&arr1[i]);
	}
	printf("enter number ur:");
	scanf("%d",&num)
	fun(arr1,num);
}
void fun(int arr1[],int a){
	int check=0;
	int i;
	for ( i =0 ;i<sizeof(arr1);++i){
	if(arr1[i]==a){
	check=1;
	break;
	}
	}
	if(check){
	printf("the %d found in index %d ",a,i);
}
else{
	printf("the number not found");
}
}