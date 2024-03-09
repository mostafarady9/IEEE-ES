#include<stdio.h>
int main(){
	int sum=0;
	int x;
	int n;
	printf("how many number do u need:");
	scanf("%d",&n);
	for(int i =1;i<n+1;i++){
		printf("%d--",i);
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("\nsum =%d\n",sum);
	printf("avarage = %d",sum/n);
	return 0;
}