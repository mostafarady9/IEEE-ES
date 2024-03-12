#include<stdio.h>
void swap(int num_1, int num_2);
int main(){
	int x=3,y=5;
	swap(x,y);
}
void swap(int num_1,int num_2){
	int temp;
	temp=num_1;
	num_1=num_2;
	num_2=temp;
	printf("x=%d y=%d",num_1,num_2);
}