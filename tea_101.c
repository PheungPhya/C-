#include<stdio.h>
#include<string.h>
int main(){
	
	int op;
	start:
	printf("[1]. game level 1.\n");
	printf("[2]. game level 2.\n");
	printf("[3]. game level 3.\n");
	printf("====================\n");
	printf("please choose one : ");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:{
				char sta[30];
				printf("complete this word[T_B_E] : ");
				scanf("%s",&sta);
				if(stricmp(sta,"table")==0){
					printf("You win.!");
				}else{
					printf("lose game.!");
				}
			break;
		}
		case 2:{
				char sta[30];
				printf("complete this word[e_e_h_nt] : ");
				scanf("%s",&sta);
				if(stricmp(sta,"elephant")==0){
					printf("You win game1.\n");
					
					printf("complete this word[a_p_e] : ");
					scanf("%s",&sta);
					if(stricmp(sta,"aplle")==0){
						printf("You win game2.");
					}else{
						printf("You lose game2.");
					}
				}else{
					printf("lose game1.!");
				}
			break;
		}
		case 3:{
				
			break;
		}
		case 4:{
				
			break;
		}
		default :{
				printf("banh jol kos hz.\n");				
				goto start;
			break;
		}	 
	}	
	
	
	return 0;
}
