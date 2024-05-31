#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int main(){
	int id[20];
	char name[30][30];
	char Grade;
	float s1[20],s2[20],s3[20];
	float Total[90];
	int i,n,j,op; 
	
	void input(){
		printf("=======> Student %d <========\n",i+1);
		printf("Enter Id : "); 		  scanf("%d",&id[i]);
		printf("Enter Name : "); 	  fflush(stdin);gets(name[i]);
		printf("Ente  Score s1 : ");  scanf("%f",&s1[i]);
		printf("Enter Score s2 : ");  scanf("%f",&s2[i]);
		printf("Enter Score s3 : ");  scanf("%f",&s3[i]);
	}
	float total(){
		Total[i]=s1[i]+s2[i]+s3[i];
		return Total[i];
	}
	float avg(){
		return total()/3;
	}
	char grade(){
		if(avg()<50){
			Grade = 'F';
		}else if(avg()<=60){
			Grade = 'E';
		}else if(avg()<=70){
			Grade = 'D';
		}else if(avg()<=80){
			Grade = 'C';
		}else if(avg()<=90){
			Grade = 'B';
		}else if(avg()<=100){
			Grade = 'A';
		}
		
		return Grade;
	}
	void head(){
		printf("%-5s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n","ID","Name","Math","Khmer","Program","Total","Average","Grade");
	}
	void Output(){
		printf("%-5d %-10s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c \n",id[i],name[i],s1[i],s2[i],s3[i],total(),avg(),grade());
	}
	
	do{
		printf("==================> Option <==================\n");
		printf("[1]. Input\n");
		printf("[2]. Output\n");
		printf("[3]. Search\n");
		printf("[4]. Update\n");
		printf("[5]. Sort\n");
		printf("[6]. Delete\n");
		printf("[7]. Insert\n");
		printf("[8]. Add More\n");
		printf("[9]. Clear\n");
		printf("[10]. And [0]. For exit.\n");
		printf("-------------------------\n");
		printf("Choose one option : ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("How many students do you want to input : ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					input();
				}
				break;
			}
			case 2:{
				head();
				for(i=0;i<n;i++){
					Output();
				}
				break;
			}
			case 3:{
				int search;
				printf("Which id do you want to search ?\n");
				printf("Enter ID : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==id[i]){
						head();
						Output();	
					}
				}
				break;
			}
			case 4:{
				int update;
				printf("Which do you want to update ?\n");
				printf("Enter ID : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==id[i]){
						input();
					}
				}
				break;
			}
			case 5:{
				char temp[20];
				int t_id;
				float t_s1,t_s2,t_s3,t_total;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(strcmp(name[i],name[j])>0){
							strcpy(temp,name[i]);
							strcpy(name[i],name[j]);
							strcpy(name[j],temp);
							
							t_id=id[i];
							id[i]=id[j];
							id[j]=t_id;
							
							t_s1=s1[i];
							s1[i]=s1[j];
							s1[j]=t_s1;
							
							t_s2=s2[i];
							s2[i]=s2[j];
							s2[j]=t_s2;
							  
							t_s3=s3[i];
							s3[i]=s3[j];
							s3[j]=t_s3;
							
							t_total=Total[i];
							Total[i]=Total[j];
							Total[j]=t_total;
						}
					}
				}
				head();
				for(i=0;i<n;i++){
					Output();
				}
				break;
			}
			case 6:{
				int del;
				printf("Which id do you want to delete ? \n");
				printf("Enter id to delelte : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==id[i]){
						for(j=i;j<n;j++){
							id[j]=id[j+1];
							strcpy(name[j],name[j+1]);
							s1[j]=s1[j+1];
							s2[j]=s2[j+1];
							s3[j]=s3[j+1];
							Total[j]=Total[j+1];
						}
						n--;
					}
				}
				break;
			}
			case 7:{
				int insert;
				printf("where id do you want to insert ?\n");
				printf("Enter id to insert : ");
				scanf("%d",&insert);
				for(i=0;i<n;i++){
					if(insert==id[i]){
						for(j=n;j>=i;j--){
							id[j]=id[j-1];
							strcpy(name[j],name[j-1]);
							s1[j]=s1[j-1];
							s2[j]=s2[j-1];
							s3[j]=s3[j-1];
							Total[j]=Total[j-1];
						}						
						n++;
						input();
						i++;
					}
				}
				break;
			}
			case 8:{
				int add;
				printf("How many students do you want to add more : ");
				scanf("%d",&add);
				for(i=n;i<n+add;i++){
					input();
				}
				n=n+add; 
				break;
			}
			case 9:{
				system("cls");
				break;
			}
			case 10: case 0:{
				exit(0);  // #include<stdlib.h>
				break;
			}
			default:{
				printf("Please Try Again!!>\n\n");
				break;
			}
		}		
	}while(op!=0);	
	return 0;	
}
