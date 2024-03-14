#include<stdio.h>
int main()
{
	int m=10,o,n;
	int * z= NULL;
	z=&m;
	printf(" adress of m : 0x%X\n",z);
	printf(" value of m: %d\n",*z);
	printf(" adress of m : 0x%X\n",&m);
	z=&n;
	*z=4;
	
	printf(" value of n: %d\n",*z);
	printf(" adress of n : 0x%X",z);
	z=&o;
	*z=6;
	
	printf(" value of n: %d\n",*z);
	printf(" adress of o : 0x%X",z);
	printf(" adress of pointer : 0x%X",&z);
	return 0;
}