#include<stdio.h>
#include<string.h>
int main(){
	char name[20],pass[20];
	
	printf("Enter your name :  ");
	scanf("%s",&name);
	printf("Enter your password : ");
	scanf("%s",&pass);
	
	if(strcmp(name,"king")==0){
		if(strcmp(pass,"123")==0){
			printf("\t====================\n");
			printf("\t|| login success! ||\n");
			printf("\t====================\n");
		}		
	}
	
	printf("========> Good Bye!!!");
	return 0;
}
