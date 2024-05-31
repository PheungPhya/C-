#include<stdio.h>
int main(){
	
	int i,j,col,row;
	int a[20][20],b[20][20],c[20][20];
	
	printf("Enter Columns : ");
	scanf("%d",&col);
	printf("Enter Rows    : ");
	scanf("%d",&row);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter value a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter value b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%-5d",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
