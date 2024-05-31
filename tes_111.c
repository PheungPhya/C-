#include<stdio.h>

void swap(int *A,int *B){
	int t;
	t=*A;
	*A=*B;
	*B=t;
	printf("A = %d\n",*A);
	printf("B = %d\n",*B);
}
        
int main(){
	int A,B;
	printf("Input A : ");
	scanf("%d",&A);
	printf("Input B : ");
	scanf("%d",&B);
	
	swap(&A,&B);
	printf("A = %d\n",A);
	printf("B = %d\n",B);
	return 0;
}
