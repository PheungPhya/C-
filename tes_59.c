#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,option;
	printf("[1]. show hello world 20\n");
	printf("[2]. show number [1-20]\n");
	printf("[3]. show number [20-1]\n");
	printf("=========================\n");
	again:
	printf("Please choose one : ");
	scanf("%d",&option);
	
	switch(option){
		case 1:{
			for(i=1;i<=20;i++){
				printf("%d. Hello world\n",i);
			}
			break;
		}
		case 2:{
			for(i=1;i<=20;i++){
				printf("%d  ",i);
			}
			break;
		}
		case 3:{
			for(i=20;i>=1;i--){
				printf("%d  ",i);
			}
			break;
		}
		default:{
			printf("You input wrong.\n");
			printf("please try again\n");
			printf("\n=================\n");
			goto again;
			break;
		}
	}
	
	return 0;
}
