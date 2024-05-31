#include<stdio.h>
#include<math.h>
int main(){
	
	int A,B,C,max;
	printf("Input A : ");
	scanf("%d",&A);
	printf("Input B : ");
	scanf("%d",&B);
	printf("Input C : ");
	scanf("%d",&C);
	
	max = (A>B && A>C) ? A : (B>A && B>C) ? B : C ;
	 
	printf("Max = %d",max);
	
	return 0; 
}
