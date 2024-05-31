#include<stdio.h>
int main(){
	
	int *ptr;
	int x=100;
	
	printf("X = %d\n",x);
	
	ptr=&x;
	
	x=900;
	printf("*ptr = %d\n",*ptr);
	
	
	return 0;
}
