#include<stdio.h>
int main(){
	int n;
	float sum=0.0 ,res1;
	printf("how many numbers do u want: ");
	scanf("%d",&n);
for(float i =1;i<=n;i++){
	res1=1/i;
	sum=res1+sum;
	printf("1/%d +",i);
}
printf("\n sum = %.3f",sum);
return 0;
}