#include<stdio.h>
#include<string.h>
int main(){
	
	char status[30];
	char word[30];
	printf("complete this word : [t_b_e] : ");
	scanf("%s",&status);
	
	if(stricmp(status,"table")==0){
		printf("You win  game. 1\n\n");
		
	}
	
	
		printf("Complete this word [a_p_e] : ");
		scanf("%s",&word);
		if(stricmp(word,"apple")==0){
			printf("You win game 2.");
		}
	
	return 0;
}
