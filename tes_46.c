#include<stdio.h>

int main(){
	int a,b,c;
	printf("Input a : ");
	scanf("%d",&a);
	printf("Input b : ");
	scanf("%d",&b);
	printf("before swap\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	swap(&a,&b);	
	printf("\nAfter swap\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	return 0;
}
