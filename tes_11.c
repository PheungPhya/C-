#include<stdio.h>
#include<math.h>
int main(){
	int a,b,max;
	printf("Input value a : ");scanf("%d",&a);
	printf("Input value b : ");scanf("%d",&b);
	
	
	(a>b) ? printf("a is greater than b\n") : printf("b is greater than a\n");
	
	if(a>b){
		printf("a is greater than b");
	}else{
		printf("b is greater than a");
	}
	
	return 0;
}
