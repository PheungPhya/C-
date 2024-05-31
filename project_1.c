#include<stdio.h>
#include<conio.h>
#include<string.h>
float total(float s1,float s2,float s3){
		return s1+s2+s3;
	}
	
	float avg(float total){
		return total/3;  
	}
	
	char Grade(float avg){
		char grade;
		if(avg>=90 && avg<=100){
			grade='A';
		}else if(avg>=80 && avg<90){
			grade='B';
		}else if(avg>=70 && avg<80){
			grade='C';
		}else if(avg>=60 && avg<70){
			grade='D';
		}else if(avg>=50 && avg<60){
			grade='E';
		}else{
			grade = 'F';
		} 
		
		return grade;
	}
void head(){
		printf("%-8s %-12s %-10s %-10s %-10s %-10s %-10s %-10s\n","ID","Name","Math","English","Khmer","Total","Average","Grade");
}
int main(){
	int i,n,j,op;
	int id[20];
	char name[20][30],grade[20];
	float s1[20],s2[20],s3[20],Total[20],Avg[20];
	
	do{
		printf("[1]. Input \n");
		printf("[2]. Ouput \n");
		printf("[3]. Search\n");
		printf("[4]. Sort\n");
		printf("[5]. Delete\n");
		printf("[6]. Insert\n");
		printf("[7]. Update\n");
		printf("[8]. Add More\n");
		printf("================\n");
		printf("choose one option : ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
					printf("How many student do you want to input : ");
					scanf("%d",&n);
					for(i=0;i<n;i++){
						printf("----Student Ti %d----\n",i+1);
						printf("Input ID  : ");
						scanf("%d",&id[i]);
						printf("Input name  : ");
						fflush(stdin);gets(name[i]);
						printf("Input Score 1 : ");
						scanf("%f",&s1[i]);
						printf("Input Score 2 : ");
						scanf("%f",&s2[i]);
						printf("Input Score 3 : ");
						scanf("%f",&s3[i]);
						printf("\n");
						Total[i]=total(s1[i],s2[i],s3[i]);
						Avg[i]=avg(Total[i]);
						grade[i]=Grade(Avg[i]);
				}
	
				break;
			}
			case 2:{
				head();
				for(i=0;i<n;i++){
					printf("%-8d %-12s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],s1[i],s2[i],s3[i],Total[i],Avg[i],grade[i]);	
				}
				break;
			}
			case 3:{
				int search;
				printf("Which id do you want to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==id[i]){
						printf("%-8d %-12s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],s1[i],s2[i],s3[i],Total[i],Avg[i],grade[i]);			
					}
				}
				break;
			}
			case 4:{
				int temp;
				char t1[20];
				float t_s1,t_s2,t_s3;
				float t_total,t_avg;
				char t_grade;			
				for(i=0;i<n-1;i++){
					for(j=i;j<n;j++){
						if(id[i]>id[j]){
							
							temp=id[i];
							id[i]=id[j];
							id[j]=temp;
							
							strcpy(t1,name[i]);
							strcpy(name[i],name[j]);
							strcpy(name[j],t1);
							
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
						    
						    t_avg=Avg[i];
							Avg[i]=Avg[j];
							Avg[j]=t_avg;
						    
					     	t_grade=grade[i];
					     	grade[i]=grade[j];
					     	grade[j]=t_grade;
															
						}	
					}
				}
				head();
				for(i=0;i<n;i++){
					printf("%-8d %-12s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],s1[i],s2[i],s3[i],Total[i],Avg[i],grade[i]);	
				}
				break;
			}
			case 5:{
				int Del;
				printf("Enter Id you want to delete : ");
				scanf("%d",&Del);
				for(i=0;i<n;i++){
					if(Del==id[i]){
						for(j=i;j<n;j++){
							id[j]=id[j+1];
							strcpy(name[j],name[j+1]);
							s1[j]=s1[j+1];
							s2[j]=s2[j+1];
							s3[j]=s3[j+1];
							Total[j]=Total[j+1];
							Avg[j]=Avg[j+1];
							grade[j]=grade[j+1];							
						}
						n--;
					}
					
				}
				
				break;
			}
			case 6:{
				int insert;
				printf("Whare id do you want to insert :  ");
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
							Avg[j]=Avg[j-1];
							grade[j]=grade[j-1];
						}						
						printf("Input ID student[%d] : ",i+1);
						scanf("%d",&id[i]);
						printf("Input name student[%d] : ",i+1);
						fflush(stdin);gets(name[i]);
						printf("Input Score 1 : ");
						scanf("%f",&s1[i]);
						printf("Input Score 2 : ");
						scanf("%f",&s2[i]);
						printf("Input Score 3 : ");
						scanf("%f",&s3[i]);
						printf("\n");
						Total[i]=total(s1[i],s2[i],s3[i]);
						Avg[i]=avg(Total[i]);
						grade[i]=Grade(Avg[i]);
						
						i++;
						n++;						
					}
				}
				break;
			}
			case 7:{
				int update;
				printf("Input Id to Update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==id[i]){
						printf("Input ID student[%d] : ",i+1);
						scanf("%d",&id[i]);
						printf("Input name student[%d] : ",i+1);
						fflush(stdin);gets(name[i]);
						printf("Input Score 1 : ");
						scanf("%f",&s1[i]);
						printf("Input Score 2 : ");
						scanf("%f",&s2[i]);
						printf("Input Score 3 : ");
						scanf("%f",&s3[i]);
						printf("\n");
						Total[i]=total(s1[i],s2[i],s3[i]);
						Avg[i]=avg(Total[i]);
						grade[i]=Grade(Avg[i]);
					}
				}
				break;
			} 
			case 8:{
				int add;
				printf("How much student do you want to Add : ");
				scanf("%d",&add);
				for(i=n;i<n+add;i++){
					    printf("Input ID student[%d] : ",i+1);
						scanf("%d",&id[i]);
						printf("Input name student[%d] : ",i+1);
						fflush(stdin);gets(name[i]);
						printf("Input Score 1 : ");
						scanf("%f",&s1[i]);
						printf("Input Score 2 : ");
						scanf("%f",&s2[i]);
						printf("Input Score 3 : ");
						scanf("%f",&s3[i]);
						printf("\n");
						Total[i]=total(s1[i],s2[i],s3[i]);
						Avg[i]=avg(Total[i]);
						grade[i]=Grade(Avg[i]);
				}
				n+=add;
				break;
			}
			default:{
				printf("please try again!!!\n");
				printf("no option number : %d\n\n",op);
				break;
			}
		}		
	}while(op!=0);
	return 0;
}
