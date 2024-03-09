#include<stdio.h>
void armstrong(int num);
void prefect(int num );
int main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	armstrong(num);
	prefect(num);
}
void armstrong(int num)
{
	int oper_num;
	int sum=0;
	int res=num;
	while(res)
	{
	oper_num =res%10;
	sum=(oper_num*oper_num*oper_num)+sum;
	res=res/10;
	}
	if(sum==num){
		printf("%d is armstrong num.\n",num);
	}
	else{
		printf("%d is not armstrong num. \n",num);
	}
}
void prefect(int num)
{
	int sum=0;
	for(int i=1;i<num;++i)
	{
	if(num%i==0)
	{
		sum=sum+i;
	}	
	}
	if(sum==num)
	{
		printf("%d is prefect number. ",num);
	}
	else  
	{
		printf("%d is not prefect number. ",num);
	}
}