#include<stdio.h>
#include<string.h>
int main(){
	char name[20],pass[20];
	
	printf("Input Name : ");
	scanf("%s",&name);
	printf("Input password : ");
	scanf("%s",&pass);
	
	if(strcmp(name,"Mala")==0){	
		if(strcmp(pass,"123a")==0){
			printf("success!!\n");
		}else{
			printf("Input wrong password\n");
		}	
	}else{
		printf("You input wrong name.");
	}
	

	return 0;
}
