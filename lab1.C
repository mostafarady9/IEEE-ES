#include<stdio.h>
int main(){
	//char* name ;
	char day;
	char month;
	int year;
    //printf("my name is mostafa");
	//scanf("%s",&name);
	printf("Enter ur brithday day:");
	scanf("%i",&day);
	printf("enter ur brithday month:");
	scanf("%i",&month);
	printf("enter ur brithday year:");
	scanf("%i",&year);
	//printf("ur name is %s",*name);
	printf("my name is mostafa.\n.");
	printf("my brithday is %i/%i/%i",day ,month ,year);
}