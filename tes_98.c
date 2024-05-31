#include<stdio.h>
int main(){
	
	char op;
	
	printf("[A]. for case 1.\n");
	printf("[B]. for case 2.\n");
	printf("Enter one option : "); scanf("%c",&op);
	
	switch(op){
		case 'A':{
				printf(" case A.");
			break;
		}
		case 'B':{
			printf("case B.");
			break;
		}
		default:{
			printf("defaul.");
			break;
		}
	}
	
	return 0;
}
