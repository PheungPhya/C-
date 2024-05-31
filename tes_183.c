#include<stdio.h>
#include<stdlib.h>
struct Lecture{
	int id;
	char name[20];
	char course[20];
	float  salary;
};

int main(){
	struct Lecture *lec;	
	int i,j,n,op;
	
	void Input(){
		printf("Enter id : ");
		scanf("%d",&(lec+i)->id);
		printf("Enter name : ");
		fflush(stdin);gets((lec+i)->name);
		printf("Enter course : ");
		gets((lec+i)->course);
		printf("Enter salary : ");
		scanf("%f",&(lec+i)->salary);
	}
	void Output(){
		printf("%-10d %-10s %-10s %-10.2f\n",(lec+i)->id,(lec+i)->name,(lec+i)->course,(lec+i)->salary);
	}
	
	do{
		printf("[1].Input\n");
		printf("[2].output\n");
		printf("[3].search\n");
		printf("[4].update\n");
		printf("[5].delete\n");
		printf("[6].exit\n");
		printf("===============\n");
		printf("choose one option : ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("Enter n => ");
				scanf("%d",&n);
				lec = (struct Lecture*)malloc(n*sizeof(struct Lecture));
				
				for(i=0;i<n;i++){
					printf("\n====> Lecture %d\n",i+1);
					Input();
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					Output();
				}
				break;
			}
			case 3:{
					int search;
					printf("\nEnter id to search : ");
					scanf("%d",&search);
					for(i=0;i<n;i++){
						if(search==(lec+i)->id){   // lec[i].id
							Output();
						}
					}
				break;
			}
			case 4:{
				int update;
				printf("Enter id to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==(lec+i)->id){
						Input();
					}
				}
				for(i=0;i<n;i++){
					Output();
				}
				break;
			}
			case 5:{
				int del;
				printf("Enter id to delete : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==(lec+i)->id){
						for(j=i;j<n;j++){
							*(lec+j)=*(lec+j+1);
						}
						n--;
					}
				}
				break;
			}
			case 6:{
				printf("==========Good bye..!\n");
				exit(1);
				break;
			}
			default:{
				printf("Please Try again.\n");
				printf("There aren't option number %d\n\n",op);
				break;
			}
		}
		
	}while(op!=0);
	return 0;
}
