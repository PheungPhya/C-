#include<stdio.h>
#include<string.h>
int main(){
	char word1[20],word2[20],word3[20];
	
	system("Color D");
	printf("Complete this word [p_o_e] : ");
	scanf("%s",&word1);
	
	if(stricmp(word1,"phone")==0){
		system("Color A");
		printf("You win game 1 !\n");
		printf("==========> <==========\n\n");
		printf("Comethis word [d_g] : ");
		scanf("%s",&word2);
		
		if(stricmp(word2,"dog")==0){
			system("Color B");
			printf("You win game 2 !\n");
			printf("==========> <==========\n\n");
			printf("Comethis word [c_t] : ");
			scanf("%s",&word3);
			
			if(stricmp(word3,"cat")==0){
				system("Color E");
				printf("You win all game!");
			}else{
				printf("You lose game 3 !");
			}
		}else{
			printf("You lose game 1 !");
		}
	}else{
		printf("You lose game 1 !");
	}
	
	return 0;
}
