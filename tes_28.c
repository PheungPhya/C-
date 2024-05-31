#include<stdio.h>
int main(){
	char status[30];
	printf("Complete this word [e_e_ha_t] : ");
	scanf("%s",&status);
	
	if(strcmp(status,"elephant")==0){
		printf("You Win the game !!\n");
	}
	
	printf("====> Good Bye!!");
	 
	return 0;
}
