#include<stdio.h>
void swap(int num_1,int num_2);
int main(){
	int x;
	int y;
	x=3,y=5;
swap(x,y);
	
}
void swap(int num_1,int num_2){
	int temp;
    num_1=num_2+num_1;//3+5=8
	num_2=num_1-num_2;//8-5=3
	num_1=num_1-num_2;
	printf("x=%d y=%d",num_1,num_2);
}