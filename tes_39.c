#include<stdio.h>
#include<string.h>
int main(){
	char status[20],state[20];
	printf("Complete this word [t_b_e] = ");
	scanf("%s",&status);
	
	
	if(stricmp(status,"table")==0){
		printf("You win game 1\n");
			
		printf("Complete this word [c_a_r] = ");
		scanf("%s",&state);
		if(stricmp(state,"chair")==0){
			printf("You win game2\n");
		}else{
			printf("You lose game2\n");
		}	
	} 
	else{
		printf("You lose game\n");
	}
	
	printf("=======> Good Bye!!!");
	return 0;
}
