#include<stdio.h>
#include<string.h>
int main(){
	char op[20];
	int option;
	do{
		printf("[1]. apple\n");
		printf("[2]. banana\n");
		printf("[3]. game complete word about house \n");
		printf("[4]. game complete word about fruit \n");
		
		printf("please choose one : ");
		scanf("%d",&option);
		switch(option){
			case 1:{
				printf("This is apple.\n");
				break;
			}
			case 2:{
				printf("This is banana.\n");
				break;
			}
			case 3:{
				char word[20];
				printf("complete this word [T_b_e] : ");
				scanf("%s",&word);
				if(stricmp(word,"Table")==0){
					printf("you win\n");
				}else{
					printf("you lose.\n");
				}
				break;
			}
			default:{
				printf("=================\n");
				printf("input wrong option\n");
				break;
			}
		}
		
		printf("do you want to continue [Y / N] : ");
		scanf("%s",&op);
	}while(stricmp(op,"y")==0);
	
	printf("=======>Good Bye!!\n");
	
	return 0;
}
