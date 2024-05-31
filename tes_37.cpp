#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Input n : ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		sum=sum+i;
		printf("%d + ",i);
	}
	printf("\b\b= %d",sum);
	
	
	return 0;
}
