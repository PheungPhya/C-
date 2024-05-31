#include<stdio.h>
int main(){
	
	int a[2][2][3]={
						{
							{10,20,30},
							{90,80,70}    },
						
						{
							{11,22,33},
							{99,88,77}
										   }
													};
	int b,r,c;
	
	for(b=0;b<2;b++){
		printf("=====> block %d <=========\n",b+1);
		for(r=0;r<2;r++){
			for(c=0;c<3;c++){
				printf("%5d ",a[b][r][c]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	printf("%d ",a[1][0][1]);
	
	
	
	
	
	return 0;
}
