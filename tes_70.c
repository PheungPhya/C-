#include<stdio.h>
#include<string.h>
int main(){
	
	int id[20],temp[30];
	int n,i,op,j;
	char name[30][30],temp1[30];
	
	void input(){
		for(i=0;i<n;i++){
			printf("Enter id[%d] : ",i);
			scanf("%d",&id[i]);
			printf("Enter Name[%d] : ",i);
			fflush(stdin);gets(name[i]);
			puts("");
		}
	}
	void output(){
		for(i=0;i<n;i++){
			printf("id : %d , name %s\n",id[i],name[i]);
		}
	}
	do{
		printf("[1]. Input\n");
		printf("[2]. Output\n");
		printf("[3]. Search\n");
		printf("[4]. Sort\n");
		printf("[0]. Exit\n");
		printf("======================\n");
		printf("Enter one option : ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("How many do you want to input : ");
				scanf("%d",&n);
				input();
				break;
			}
			case 2:{
				output();
				break;
			}
			case 3:{
				int search;
				printf("which id do you want to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==id[i]){
						printf("Id[%d]   : %d\n",i,id[i]);
						printf("Name[%d] : %s\n",i,name[i]);
						
					}
				}
				break;
			}
			case 4:{
				for(i=0;i<n;i++){
					for(j=0;j<n-1;j++){
						if(strcmp(name[j],name[j+1])>0){
							
							strcpy(temp1,name[j]);
							strcpy(name[j],name[j+1]);
							strcpy(name[j+1],temp1);
							
							temp[j]=id[j];
							id[j]=id[j+1];
							id[j+1]=temp[j];
							
						}
					}
				}
				output();
				break;
			}
			default:{
				printf("Wrong option !!\n\n");
				break;
			}
			
		}
		
	}while(op!=0);
	
	
	
	
	
	return 0;
}
