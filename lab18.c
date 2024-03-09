#include<stdio.h>
int main(){
	int num=0;
	int sum=0;
	while(num<10){
        sum=num+sum;
		num++;
	}
	printf("%d",sum);
	return 0;
}