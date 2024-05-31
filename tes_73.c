#include<stdio.h>

int main(){
	
	//1+2+3+4+...+n
	
	int i,n,sum=0;
	printf("Input n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum + i ;
		printf("%d + ",i);
	}
	printf("\b\b = %d \n",sum);
	
	return 0;
}
