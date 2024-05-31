#include<stdio.h>
int main(){
	
	int i,j,row,col;
	int num[20][20]; 
	
	printf("Enter row : ");
	scanf("%d",&row);
	printf("Enter column : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter value num[%d][%d]: ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%-5d  ",num[i][j]);			
		}
		printf("\n");
	}
	
	return 0;
}
