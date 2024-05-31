#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void head(){
	printf("\n%-6s %-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n","ID","NAME","SEX","MATH","PROGRAM","KHMER","TOTAL","AVERAGE","GRADE");
}

int main(){
	int i,j,n,op;
	int id[20];
	char name[20][20];
	char sex[20];
	float s1[20],s2[20],s3[20];
	
	void input(){
		printf("Enter ID : ");   // i=0 i=1
		scanf("%d",&id[i]);
		printf("Enter Name : ");
		fflush(stdin);gets(name[i]);
		printf("Enter Sex  : ");
		scanf("%c",&sex[i]);
		printf("Enter Math : ");
		scanf("%f",&s1[i]);
		printf("Enter Program : ");
		scanf("%f",&s2[i]);
		printf("Enter Khmer : ");
		scanf("%f",&s3[i]);
	}
	
	float Total(){
		return s1[i]+s2[i]+s3[i];
	}
	float avg(){
		return Total()/3;
	}
	char grade(){
		char g;
		if(avg()<50){
			g='F';
		}else if(avg()<=60){
			g='E';
		}else if(avg()<=70){
			g='D';
		}else if(avg()<=80){
			g='C';
		}
		else if(avg()<=90){
			g='B';
		}
		else if(avg()<=100){
			g='A';
		}
		
		return g;
	}
	
	void output(){
		printf("%-6d %-10s %-10c %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],sex[i],s1[i],s2[i],s3[i],Total(),avg(),grade());
	}

	
	do{
		printf("[1]. Input \n");
		printf("[2]. Output\n");
		printf("[3]. Search\n");
		printf("[4]. Update\n");
		printf("[5]. Delete\n");
		printf("[6]. Insert\n");
		printf("[7]. Sort\n");   
		printf("[8]. Add More\n");
		printf("[9]. Clear\n");
		printf("[10] Or [0]. For Exit.!\n");
		printf("========================\n");
		printf("Choose one option : ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("How many student do you want input : ");
				scanf("%d",&n);
				for(i=0;i<n;i++){  
					input();
				}
				break;
			}
			case 2:{
				head();
				for(i=0;i<n;i++){
					output();
				}
				break;
			}
			case 3:{
				int search;
				printf("Enter ID to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){   
					if(search==id[i]){
						head();
						output();
					}
				}
				break;
			}
			case 4:{
				char update[20];
				printf("Enter name to update : ");
				fflush(stdin);gets(update);
				for(i=0;i<n;i++){
					if(stricmp(update,name[i])==0){
						input();	
					}
				}
				break;   
			}
			case 5:{
				int Delete;
				printf("Enter id to delete => ");
				scanf("%d",&Delete);
				for(i=0;i<n;i++){
					if(Delete==id[i]){
						for(j=i;j<n;j++){
							id[j]=id[j+1];
							strcpy(name[j],name[j+1]);
							sex[j]=sex[j+1];
							s1[j]=s1[j+1];
							s2[j]=s2[j+1]; 
							s3[j]=s3[j+1];
						}
						n--;
					}
				}
				for(i=0;i<n;i++){
					output();
				}
				break;
			}
			case 6:{
				int insert;
				printf("Where id do you want to insert : ");
				scanf("%d",&insert);
				for(i=0;i<n;i++){
					if(insert==id[i]){
						for(j=n;j>i;j--){
							id[j]=id[j-1];
							strcpy(name[j],name[j-1]);
							sex[j]=sex[j-1];
							s1[j]=s1[j-1];
							s2[j]=s2[j-1];
							s3[j]=s3[j-1];
						}
						n++;
						input();
						break;
					}
				}
				break;
			}
			case 7:{
				int temp_id;
				char temp_name[20];
				char temp_sex;
				float temp_s;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(id[i]>id[j]){
							temp_id=id[i];
							id[i]=id[j];
							id[j]=temp_id;
							
							strcpy(temp_name,name[i]);
							strcpy(name[i],name[j]);
							strcpy(name[j],temp_name);
							
							temp_sex=sex[i];
							sex[i]=sex[j];
							sex[j]=temp_sex;
							
							temp_s=s1[i];
							s1[i]=s1[j];
							s1[j]=temp_s;
							
							temp_s=s2[i];
							s2[i]=s2[j];
							s2[j]=temp_s;
							
							temp_s=s3[i];
							s3[i]=s3[j];
							s3[j]=temp_s;
							
						}
					}
				}
				head();
				for(i=0;i<n;i++){
					output();
				}
				
				break;
			}
			case 8:{
				int add;
				printf("How many student do you want to add more : ");
				scanf("%d",&add);
				for(i=n;i<n+add;i++){
					input();
				}
				n=n+add;
				break;
			}
			case 9:{
				system("cls"); // #include<stdlib.h>
				break;
			}
			case 1 0:{
				printf("\n\n\n===========> Good bye...!");
				exit(1);   // #include<stdlib.h>
				break; 
			}
		}
		
	}while(op!=0);
	
	return 0;
}
