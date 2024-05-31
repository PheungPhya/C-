#include<stdio.h>
int main(){
	
	int a[40][40];
	int b[30][30];
	int c[40][40];
	int i,j,row,col;
	printf("Enter rows : ");
	scanf("%d",&row);
	printf("Enter columns : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){      
		for(j=0;j<col;j++){  
			printf("Enter value a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++){      
		for(j=0;j<col;j++){  
			printf("Enter value b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++){      
		for(j=0;j<col;j++){  
			c[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++){      // 2
		for(j=0;j<col;j++){  // 3
			printf("%10d",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
