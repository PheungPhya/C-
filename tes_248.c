#include<stdio.h>
int main(){
	
	int a,b;   // biger , smaller or equal
	
	printf("Input a : ");
	scanf("%d",&a);
	printf("Input b : ");
	scanf("%d",&b);
	
	if(a>b){   // false
		printf("a is bigger than b");
	}else if(a==b){  // false
		printf("a is equal b");
	}else{
		printf("a is smaller than b");
	}
	
	return 0;
}
