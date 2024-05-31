#include<stdio.h>
#include<string.h>
int main(){
	char fruit[40][40];
	char search[30];
	int i,n,f=0;
	
	printf("How many fruit do you want to input : ");
	scanf("%d",&n);
	
	printf("===========> Enter <============\n");
	for(i=0;i<n;i++){
		printf("%d, Enter fruit : ",i+1);
		fflush(stdin);gets(fruit[i]);
	}
	
	printf("===========> Output <============\n");
	for(i=0;i<n;i++){
		printf("Fruit[%d] = %s\n",i,fruit[i]);
	}
	
	printf("\nWhich fruit do you want to search ?\n");
	printf("Enter name fruit : ");
	gets(search);
	printf("===========> After Search <============\n");
	for(i=0;i<n;i++){
		if(stricmp(search,fruit[i])==0){
			printf("fruit[%d] = %s\n",i,fruit[i]);
			f=1;
		}
	}
	
	if(f==1){
		printf("Search has found : %s\n",search);
	}else{
		printf("Search not found : %s\n",search);
	}
	
	return 0;
}
