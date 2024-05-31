#include<stdio.h>
int main(){
	
	char name[];  // use with %s
	printf("Enter your name : ");

	gets(name);
	printf("==========================\n");
	printf("Your name is : %s",name);
	
	return 0;
}
