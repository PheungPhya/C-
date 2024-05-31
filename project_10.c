#include<stdio.h>

struct Staff{
	int id;
	char name[20];
	char gender[20];
	char position[20];
	float salary;
};

int main(){
	struct Staff st[20];
	int i,j,n,op;
		
	do{
		printf("\n[1]. Input\n");
		printf("[2]. Output\n");
		printf("[3]. Search\n");
		printf("[4]. Update\n");
		printf("[5]. Delete\n");
		printf("[6]. Insert\n");
		printf("[7]. Sort_ID\n");
		printf("[8]. Add More\n");
		printf("[9]. Exit\n");
		printf("===============\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("How many Staff do you want to input : ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("\n==========>Staff %d\n",i+1);
					printf("Enter Id : ");
					scanf("%d",&st[i].id);
					printf("Enter Name : ");
					fflush(stdin);gets(st[i].name);
					printf("Enter Gender : ");
					gets(st[i].gender);
					printf("Enter Position : ");
					gets(st[i].position);
					printf("Enter Salary : ");
					scanf("%f",&st[i].salary);
				}
				break;
			}
			case 2:{
				//Output
				printf("\n---------------------------------------------------\n");
				for(i=0;i<n;i++){
					printf("%-10d %-10s %-10s %-10s $%-10.2f\n",st[i].id,st[i].name,st[i].gender,st[i].position,st[i].salary);
				}
				printf("\n---------------------------------------------------\n");
				break;
			}
			case 3:{
				int search;
				printf("Enter id to search ==> ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==st[i].id){
						printf("\n---------------------------------------------------\n");			
						printf("%-10d %-10s %-10s %-10s $%-10.2f\n",st[i].id,st[i].name,st[i].gender,st[i].position,st[i].salary);			
					}
				}
				break;
			}
			case 4:{
				int update;
				printf("Enter id to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==st[i].id){
						printf("\n==========>Update Staff %d\n",i+1);
						printf("Enter Id : ");
						scanf("%d",&st[i].id);
						printf("Enter Name : ");
						fflush(stdin);gets(st[i].name);
						printf("Enter Gender : ");
						gets(st[i].gender);
						printf("Enter Position : ");
						gets(st[i].position);
						printf("Enter Salary : ");
						scanf("%f",&st[i].salary);				
					}
				}
				break;
			}
			case 5:{
				int del,f=0;
				printf("Enter id to delete : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==st[i].id){
						for(j=i;j<n;j++){
							st[j]=st[j+1];
						}
						f=1;
						n--;
					}
				}
				if(f==1){
					printf("Delete success.!\n");
				}else{
					printf("Delete false.!\n");
				}
				break;
			}
			case 6:{
				int insert;
				printf("Enter id to insert : ");
				scanf("%d",&insert);
				for(i=0;i<n;i++){
					if(insert==st[i].id){
						for(j=n;j>i;j--){
							st[j]=st[j-1];
						}
						n++;
						printf("\n==========>Staff %d\n",i+1);
						printf("Enter Id : ");
						scanf("%d",&st[i].id);
						printf("Enter Name : ");
						fflush(stdin);gets(st[i].name);
						printf("Enter Gender : ");
						gets(st[i].gender);
						printf("Enter Position : ");
						gets(st[i].position);
						printf("Enter Salary : ");
						scanf("%f",&st[i].salary);
						break;
					}
				}
				break;
			}
			case 7:{
				struct Staff temp;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(st[i].id > st[j].id){
							temp=st[i];
							st[i]=st[j];
							st[j]=temp;
						}
					}
				}
				printf("\n---------------------------------------------------\n");
				for(i=0;i<n;i++){
					printf("%-10d %-10s %-10s %-10s $%-10.2f\n",st[i].id,st[i].name,st[i].gender,st[i].position,st[i].salary);
				}
				printf("\n---------------------------------------------------\n");
				break;
			}
			case 8:{
				int add;
				printf("How many staff do you want to add more : ");
				scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("\n==========>Staff %d\n",i+1);
					printf("Enter Id : ");
					scanf("%d",&st[i].id);
					printf("Enter Name : ");
					fflush(stdin);gets(st[i].name);
					printf("Enter Gender : ");
					gets(st[i].gender);
					printf("Enter Position : ");
					gets(st[i].position);
					printf("Enter Salary : ");
					scanf("%f",&st[i].salary);
				}
				n=n+add;
				break;
			}
			case 9:{
				printf("====> Good Bye..!\n");
				exit(1);
				break; 
			}
			default:{
				printf("Please Select option again..!\n");
				break;
			}
		}	
	}while(1);
	
	return 0;
}
