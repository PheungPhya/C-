#include<stdio.h>
int main(){
	
	int a,b,c,max;
	printf("Input a : ");
	scanf("%d",&a);
	printf("Input b : ");
	scanf("%d",&b);
	printf("Input c : ");
	scanf("%d",&c);
	
	max = (a>b && a>c) ? a : (b>a && b>c) ? b : c ;
	
	printf("===================\n");
	printf("Maximum = %d",max);
	
	return 0;
}
