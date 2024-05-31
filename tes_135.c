#include<stdio.h>
int main(){
	
	int a[50][50];
	int i,j,row,col;
	
	printf("Input Row : ");
	scanf("%d",&row);
	printf("Input Column : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("===========> Output <============\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%-7d",a[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
