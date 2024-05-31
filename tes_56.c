#include<stdio.h>
int main(){
	char name[50];
	printf("Input your name : ");
//	scanf("%s",&name);
//	fflush(stdin);
	fgets(name,sizeof name,stdin);
	printf("Your name is %s",name);
	
	char sex;
	printf("Input gender : ");
	scanf("%c",&sex);
	printf("your gender is = %c\n",sex);
	
	
	return 0;
}
