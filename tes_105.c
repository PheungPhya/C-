#include<stdio.h>

int sum(int n){
	int i,sum1=0;
	for(i=1;i<=n;i++){   // 1+2+3+4+..+n
		sum1 = sum1 + i;
	}
	return sum1;
}

int main(){
	
	int n;
	printf("Input n : ");
	scanf("%d",&n);
	
	printf("sum = %d\n",sum(n));
	
	return 0;
}
