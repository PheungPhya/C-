#include<stdio.h>
int main(){
	int i,j,r;
	printf("Input number of the row (half of diamond) : ");
	scanf("%d",&r);
	for(i=0;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=r-1;i>=1;i--){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
