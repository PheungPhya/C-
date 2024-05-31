#include<stdio.h>
#include<math.h>
int main(){
	int x,total;
	
	printf("input x : ");
	scanf("%d",&x);
	
	total = x + (2*x) + (3*x) - (4*x) - (5*x);
	printf("[1]. x + (2*x) + (3*x) - (4*x) - (5*x) = %d\n",total);
	
	total = x + (x*x) + (x*x*x) + pow(x,4) + pow(x,5);
	
	printf("[2]. x + (x*x) + (x*x*x) + pow(x,4) + pow(x,5)= %d",total);
	return 0;
}
