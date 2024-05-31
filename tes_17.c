#include<stdio.h>
#include<string.h>
int main(){
	
	char word1[30];
	char word2[30];
	char word3[30];
	
	printf("Complet this word1 [el_ph_n_] : ");
	scanf("%s",&word1);
	
	if(!(stricmp(word1,"elephant"))){
		printf("you win game1\n");
		
		printf("Complet this word2 [a_p_e] : ");
		scanf("%s",&word2);
		
		if(stricmp(word2,"apple")==0){
			
			printf("you win game2\n");
			printf("Complet this word3 [b_o_] : ");
			scanf("%s",&word3);
			if(stricmp(word3,"book")==0){
				
				printf("you win all the game");
			}else{
				printf("You lose game3");
			}
		}else{
			printf("You lose game2");
		}
	}else{
		printf("You lose game1");
	}

	return 0;
}
