#include<stdio.h>
int main(){
	int i,row,j;
	printf("Input row of diamond : ");
	scanf("%d",&row);
	
	for(i=0;i<=row;i++){
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=row-1;i>=1;i--){
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
