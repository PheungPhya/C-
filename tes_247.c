#include<stdio.h>
#include<string.h>
int main(){
	
	char user[20],upass[20],cpass[20];
	
	printf("Enter User Name : ");
	scanf("%s",&user);
		
	if(stricmp(user,"Tida")==0){
		printf("Enter User Password : ");
		scanf("%s",&upass);
		
		if(strcmp(upass,"123")==0){
			printf("Enter comfirm Password : ");
			scanf("%s",&cpass);
			
			if(strcmp(cpass,"123")==0){
				printf("You Login Success.!!\n");
			}
		}
	}
	
		
	return 0;
}
