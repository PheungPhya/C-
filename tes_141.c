#include<stdio.h>
int main(){
	
	int y=200;
	int *ptr;
	ptr=&y;
	
	printf("Addres y is : %p\n",&y);
	printf("Addres *ptr is %p\n",ptr);
	
	y=900;
	
	printf("Value y is : %d\n",y);
	printf("Value *ptr is : %d\n",*ptr);
	
	
	
	return 0;
}
