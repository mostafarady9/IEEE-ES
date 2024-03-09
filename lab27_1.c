#include<stdio.h>
void fun(int num);
int main(){
	int x=7;
	fun(x);
	fun(x);
}
void fun(int num){
	printf("%d",	num*num);
}