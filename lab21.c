#include<stdio.h>
int main(){
	int n;
	printf("how many numbers do u want:");
	scanf("%i",&n);
	for(int i=1;i<=n;i++){
		printf("%i--%i\n",i,(i*i*i));
	}
}