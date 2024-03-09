#include<stdio.h>
int p_num (int x);
int main(){
	int num;
	int check;
	printf("Enter the number : ");
	scanf("%d",&num);
	if(p_num(num)){
		printf("the %d is not prime num. ",num);
	}
	else 
	{
		printf("the %d is prime number. ",num);
	}
}
int p_num (int x){
	int check=0;
	for (int i=2;i<x;i++){
		if(x%i==0){
			check++;
			break;
		}
		return check;
	}
}