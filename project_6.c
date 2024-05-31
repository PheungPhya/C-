#include<stdio.h>
#include<stdlib.h>
struct Employee{
	int id;
	char name[20];
	char gender[20];
	float salary;
};

int main(){
	struct Employee *emp,temp;
	int i,j,n,op;
	
	void Input(){
		printf("\n========> Employee %d\n",i+1);
		printf("Enter id     : ");scanf("%d",&(emp+i)->id);// emp[i].id
		printf("Enter name   : ");fflush(stdin);gets((emp+i)->name);
		printf("Enter gender : ");gets((emp+i)->gender);
		printf("Enter salary : ");scanf("%f",&(emp+i)->salary);
	}
	void Output(){
		printf("%-7d %-10s %-10s $%-10.2f\n",(emp+i)->id,(emp+i)->name,(emp+i)->gender,(emp+i)->salary);
	}
	
	do{
		printf("\n---------------\n");
		printf("[1].Input \n");
		printf("[2].Output\n");
		printf("[3].Search\n");
		printf("[4].Update\n");
		printf("[5].Delete\n");
		printf("[6].For exit\n");
		printf("[7].Add More \n");
		printf("[8].Insert\n");
		printf("[9].Sort ID\n");
		printf("---------------\n");
		printf("Select one option => ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("How many Employee do you want to input : ");
				scanf("%d",&n);
				emp = (struct Employee*)malloc(n*sizeof(struct Employee));
				for(i=0;i<n;i++){
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
					if(search==(emp+i)->id){
						Output();
					}
				}
				break;
			}
			case 4:{
				int update;
				printf("\nEnter id to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==(emp+i)->id){
						Input();	
					} 
				}
				break;
			}
			case 5:{
				int del,f=0;
				printf("\nEnter id to delete : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==(emp+i)->id){
						for(j=i;j<n;j++){
							*(emp+j)=*(emp+j+1);
							// emp[j]=emp[j+1]
						}
						n--;
						f=1;
					}
				}
				if(f==1){
					printf("Delete Success..!\n");
				}else{
					printf("Delete false..!\n");
				}
				break;
			}
			case 6:{
				printf("=========> Good Bye.!!!!\n");
				exit(1);
				break;
			}
			case 7:{
				int add;
				printf("How many do you want to add more : ");
				scanf("%d",&add);
				emp = (struct Employee *)realloc(emp,add * sizeof(struct Employee));
				for(i=n;i<n+add;i++){
					Input();
				}
				n=n+add;
				break;
			}
			case 8:{
				int insert;
				printf("Where do you wanto to insert : ");
				scanf("%d",&insert);
				for(i=0;i<n;i++){
					if(insert==(emp+i)->id){
						for(j=n;j>i;j--){
							*(emp+j)=*(emp+j-1);
							// emp[j]=emp=[j-1];
						}
						n++;
						Input();
						break;
					}
				}
				break;
			}
			case 9:{
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if((emp+i)->id > (emp+j)->id){
							temp=emp[i];
							emp[i]=emp[j];
							emp[j]=temp;
						}
					}
				}
				break;
			}
			default:{
				printf("Please select again..!!!\n\n");
				break;
			}
		}		
	}while(op!=0);
	
	return 0;
}
