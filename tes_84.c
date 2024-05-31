#include<stdio.h>
#include<string.h>
int main(){
	
	char name[20],pass[20],cpass[20];
	
	printf("Input your name : ");
	scanf("%s",&name);	
	if(strcmp(name,"lion")==0){
		
		printf("Input your password : ");
		scanf("%s",&pass);
		if(strcmp(pass,"1234")==0){
			
			printf("Input comfirm password : ");
			scanf("%s",&cpass);
			if(strcmp(cpass,"1234")==0){
				
				system("Color D\n");
				printf("Login Success.\n");
			}
		}
	}
	
	
	
	
	return 0;
}

