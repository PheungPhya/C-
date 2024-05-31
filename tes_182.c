#include<stdio.h>
#include<stdlib.h>
int menu(){
	int op;
	printf("[1]. Input\n");
	printf("[2]. Output\n");
	printf("[3]. Search\n");
	printf("[4]. Update\n");
	printf("[5]. Delete\n");
	printf("[6]. Exit\n");
	printf("=================\n");
	printf("choose one option : ");
	scanf("%d",&op); //12	
	return op;
}

int main(){
	int *ptr;
	int i,n;
	
	do{
		
		switch(menu()){
			case 1:{
				printf("Input n : ");
				scanf("%d",&n);
				ptr=(int*)calloc(n,sizeof(int));
				for(i=0;i<n;i++){
					printf("Enter value Ti %d : ",i+1);
					scanf("%d",ptr+i);
				}
				break;
			}
			case 2:{
				system("cls");
				for(i=0;i<n;i++){
					printf("%d   ",*(ptr+i)); 
				}
				printf("\n");
				break;
			}
			case 3:{
				int search;
				system("cls");
				printf("Which number do you want to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==*(ptr+i)){
						printf("There is number : %d\n",*(ptr+i));
						search=0;
					}
				}
				if(search==0){
					printf("Search has found\n");
				}else{
					printf("Search false.!\n");
				}
				break;
			}
			case 4:{
				int update;
				printf("Which number do you want to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==*(ptr+i)){
						printf("Update value Ti %d : ",i+1);
						scanf("%d",ptr+i);
						update=0;
					}
				}
				if(update==0){
					printf("Update Success.\n");
				}else{
					printf("Update false.!\n");
				}
				break;
			}
			case 5:{
				int del,j;
				printf("Which number do you want to Delete : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==*(ptr+i)){
						for(j=i;j<n;j++){
							*(ptr+j)=*(ptr+j+1);
							// ptr[j]=ptr[j+1]
						}
						n--;
						del=0;
					}
				}
				if(del==0){
					printf("Delete Success.\n");
				}else{
					printf("Delete false.!\n");
				}
				break;
			}
			case 6:{
				printf("====> Good bye..!\n");
				exit(1);
				break;
			}	
		}				
	}while(1);
	
	return 0;
}
