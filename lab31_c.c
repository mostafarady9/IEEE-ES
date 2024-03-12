#include<stdio.h>
void swap(int num_1,int num_2);
int main(){
	int x;
	int y;
	x=3,y=5;
	swap(x,y);
}
void swap(int num_1,int num_2){
	num_1=num_1^num_2;//110^101=011
	num_2=num_1^num_2;//011^101=110
	num_1=num_2^num_1;//110^011=101
	printf("x= %d y= %d",num_1,num_2);
}