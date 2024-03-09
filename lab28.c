#include<stdio.h>
void D2B(int x);
int main(){
	int num;
printf("Enter ur num : ");
scanf("%d",&num);
D2B(num);
}
void D2B(int x){
	while(x){
		if(x%2)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		x=x/2;
	}
}