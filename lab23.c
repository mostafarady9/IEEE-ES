#include<stdio.h>
int main()
{
	int n;
	int num_1=0;
printf("enter num of rows: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
	for(int j=0; j<i;j++){
	printf(" %d",num_1);
	num_1++;
	}
	printf("\n");
}

return 0;    
}