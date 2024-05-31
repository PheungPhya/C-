#include<stdio.h>
int main(){
	long x,y,total;
	printf("Input x : ");scanf("%ld",&x);
	printf("Input y : ");scanf("%ld",&y);
	total = x%y;
	printf("x %% y = %ld\n",total);
	printf(" X %% Y = %ld \n",x%y);
	printf(" %ld %% %ld = %ld",x,y,x%y);
	return 0;
}
