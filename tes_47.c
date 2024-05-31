#include<stdio.h>
#include<math.h>
int main(){
	
	char word[20];
	printf("complete this world [T_b_e] : ");
	scanf("%s",&word);
	
	(stricmp(word,"table")==0) ? printf("You win\n")&&printf("You good")
							   : printf("You lose\n")&&printf("you poor\n");
	
	
	
	
	return 0;
}
