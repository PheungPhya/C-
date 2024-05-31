#include<stdio.h>
int main(){
	int x,y;
	
	printf("%d > %d && %d < %d answer : %d \n",10,5,10,5,((10>5)&&(10<5)));
	printf("%d < %d && %d > %d answer : %d \n",10,5,10,5,((10<5)&&(10>5)));
	printf("%d == %d && %d < %d answer : %d \n",10,5,10,5,((10==5)&&(10<5)));
	printf("%d > %d && %d != %d answer : %d \n",10,5,10,5,((10>5)&&(10!=5)));
	return 0;
}
