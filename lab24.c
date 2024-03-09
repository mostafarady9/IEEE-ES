#include<stdio.h>
int main()
{
	int raws;
	int k;
	int num=1;
printf("enter num of rows: ");
scanf("%d",&raws);
for(int i=0;i<raws;i++){
	for(k=i;k<raws-1;k++){
		printf(" ");
	}
	for(int j=0; j<i;j++){
	printf(" %d",num);
	num++;
	}printf("\n");
}

return 0;    
}