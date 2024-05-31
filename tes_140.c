#include<stdio.h>
#include<string.h>
int main(){
	char name[30][30];
	char update[20];
	int i,n,f=0;
	printf("How many names do you want to input : ");
	scanf("%d",&n);
	printf("===============> Input <==============\n");
	for(i=0;i<n;i++){
		printf("%d. Name : ",i+1);     
		fflush(stdin);gets(name[i]);
	}
	printf("==============> Output <==============\n");
	for(i=0;i<n;i++){
		printf("Name[%d] is : %s\n",i,name[i]);
	}
	printf("\nWhich name do you want to update : ");
	gets(update);
	for(i=0;i<n;i++){
		if(stricmp(update,name[i])==0){
			printf("%d. Name : ",i+1);     
			fflush(stdin);gets(name[i]);
		}
	}
	printf("==============> After Update <==============\n");
	for(i=0;i<n;i++){
		printf("Name[%d] is : %s\n",i,name[i]);
	}
	return 0;
}
