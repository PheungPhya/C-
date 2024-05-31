#include<stdio.h>
void sum(){
	// 1+2+3+...+n
	int n,i,sum1=0;
	printf("Input n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum1 = sum1 + i;
		printf("%d + ",i);
	}
	printf("\b\b= %d\n",sum1);
}



int main(){
	sum();
	
	return 0;
}


