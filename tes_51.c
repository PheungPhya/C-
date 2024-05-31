#include<stdio.h>
int main(){
	int op;
	printf("[1]. for case 1 \n");
	printf("[2]. for case 2 \n");
	printf("===================\n");
	printf("choose one option : ");
	scanf("%d",&op);
	
	switch(op){	
		case 1:{
			printf("This is case 1.\n");
			break;
		}
		case 2:{
			printf("This is case 2.\n");
			break;
		}
		default:{
			printf("This is default.\n");
			break;
		}	
	}
	
	return 0;
}
