#include<stdio.h>
int main(){
	int x=5, y=2,z,k,l,m,n;
	z=x&y;
	k=x|y;
	l=x>>1;
	m=x^y;
	n=x<<2;
	printf("%d\n",z);
	printf("%d\n",k);
	printf("%d\n",l);
	printf("%d\n",m);
	printf("%d\n",n);
}