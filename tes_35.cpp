#include<stdio.h>
#include<string.h>
int main(){
	char word[20],word1[20];
	
	printf("Comeplet this word [m_t_r] : ");
	scanf("%s",&word);
	printf("Comeplet this word [c_r] : ");
	scanf("%s",&word1);
	
	if(strcmp(word,"motor")==0){
		if(strcmp(word1,"car")==0){
			printf("\t=============\n");
			printf("\t|| You win ||\n");
			printf("\t=============\n");
		}
	}
	
	printf("========> Good Bye!!!");
	return 0;
}
