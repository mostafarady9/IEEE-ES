#include<stdio.h>
int main(){
	int n;
	int count_num;
	printf("enter number of raws: ");
	scanf("%d",&n);
	for(int i =0 ; i<n;i++){
		
		for(int j=0;j<i;j++){
			count_num++;
			if(count_num%2!=0){
			printf("0");
}
			else {
				printf("1");
				count_num=0;
				}
			}
		printf("\n");
	}
	return 0;
}