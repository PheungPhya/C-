#include<stdio.h>
int main(){
	
	int *ptr;
	int *ptr1;
	int x=100;
	int y=100;
	
	ptr = &x;
	ptr1 = &y;
	x=200;
	
	printf("*ptr + *ptr1 = %d\n",*ptr + *ptr1);
	printf("*ptr - *ptr1 = %d\n",*ptr - *ptr1);
	printf("*ptr * *ptr1 = %d\n",*ptr * *ptr1);
	printf("*ptr / *ptr1 = %d\n",*ptr / *ptr1);
	
	return 0;
}


/* */


