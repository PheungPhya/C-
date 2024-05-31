#include<stdio.h>
int main(){
	
	int a[20][20],b[20][20],c[20][30];
	int i,j,row,col;
	
	printf("Input rows    : ");
	scanf("%d",&row);
	printf("Input columns : ");
	scanf("%d",&col);
	
	// input a
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter value a: ");
			scanf("%d",&a[i][j]);			
		}
		printf("\n");
	}
	// input b
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter value b: ");
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	// Add
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	// Output
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%-5d",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
