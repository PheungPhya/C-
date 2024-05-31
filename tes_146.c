#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float Total(float s1,float s2,float s3){
	return s1+s2+s3;
}
float Avg(float total){
	return total/3;
}
char Grade(float avg){
	char grade;
	if(avg>=90 && avg<=100){
		grade = 'A';		
	}else if(avg>=80 && avg<90){
		grade =  'B';		
	}else if(avg>=70 && avg<80){
		grade = 'C';	
	}else if(avg>=60 && avg<70){
		grade = 'D';	
	}else if(avg>=50 && avg<60){
		grade = 'E';	
	}else {
		grade = 'F';
	}
	return grade;
}
void head(){
	printf("%-7s %-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n","ID","NAME","GENDER","MATH","PROGRAM","KHMER","TOTAL","AVERAGE","Grade");
}
void under(){
	printf("==========================================================================================\n");
}
int main(){
	int id[20];
	char name[30][30];
	char gender[30][30];
	float s1[20],s2[20],s3[20];
	char grade[20];
	float total[20],avg[20];
	int op,n,i,j;
	n=0;
	do{
		printf("[1].Input Student\n");
		printf("[2].Ouput Student\n");
		printf("[3].Search Student\n");
		printf("[4].Update Student\n");
		printf("[5].Sort  Studnet\n");
		printf("[6].Delete Student\n");
		printf("[7].Insert Student\n");
		printf("[8].Add More Student\n");
		printf("[9]. And [0] For Exit\n");
		printf("[10]. Clear\n");
		printf("-----------------------\n");
		printf("Choose one Option : ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("How many student do you want to Input : ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("=========> Student %d <===========\n",i+1);
					printf("Enter ID : ");
					scanf("%d",&id[i]);
					printf("Enter Name : ");
					fflush(stdin);gets(name[i]);
					printf("Enter Gender : ");
					gets(gender[i]);
					printf("Enter Math Score : ");
					scanf("%f",&s1[i]);
					printf("Enter Program Score : ");
					scanf("%f",&s2[i]);
					printf("Enter Khmer Score : ");
					scanf("%f",&s3[i]);
					total[i]  = Total(s1[i],s2[i],s3[i]);
					avg[i]    = Avg(total[i]);
					grade[i]  = Grade(avg[i]);
				}
				printf("\n");
				break;
			}
			case 2:{
				head();
				for(i=0;i<n;i++){
					printf("%-7d %-10s %-10s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],gender[i],s1[i],s2[i],s3[i],total[i],avg[i],grade[i]);
				}
				under();
				printf("\n");
				break;
			}
			case 3:{
				int search;
				printf("Which id do you want to search : ");
				scanf("%d",&search);
				head();
				for(i=0;i<n;i++){
					if(search==id[i]){
						printf("%-7d %-10s %-10s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],gender[i],s1[i],s2[i],s3[i],total[i],avg[i],grade[i]);	
					}
				}
				under();
				break; 
			}
			case 4:{
				int update;
				printf("Which id do you want to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==id[i]){
						printf("=========> Student %d <===========\n",i+1);
						printf("Enter ID : ");
						scanf("%d",&id[i]);
						printf("Enter Name : ");
						fflush(stdin);gets(name[i]);
						printf("Enter Gender : ");
						gets(gender[i]);
						printf("Enter Math Score : ");
						scanf("%f",&s1[i]);
						printf("Enter Program Score : ");
						scanf("%f",&s2[i]);
						printf("Enter Khmer Score : ");
						scanf("%f",&s3[i]);
						total[i]  = Total(s1[i],s2[i],s3[i]);
						avg[i]    = Avg(total[i]);
						grade[i]  = Grade(avg[i]);	
					}
				}
				break;
			}
			case 5:{
				int t1;
				float t2;
				char t3[30];
				char t4;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(id[i]>id[j]){
							t1=id[i];
							id[i]=id[j];
							id[j]=t1;
							
							strcpy(t3,name[i]);
							strcpy(name[i],name[j]);
							strcpy(name[j],t3);
							
							strcpy(t3,gender[i]);
							strcpy(gender[i],gender[j]);
							strcpy(gender[j],t3);
							
							t2=s1[i];
							s1[i]=s1[j];
							s1[j]=t2;
							
							t2=s2[i];
							s2[i]=s2[j];
							s2[j]=t2;
							
							t2=s3[i];
							s3[i]=s3[j];
							s3[j]=t2;
							
							t2=total[i];
							total[i]=total[j];
							total[j]=t2;
							
							t2=avg[i];
							avg[i]=avg[j];
							avg[j]=t2;
							
							t4=grade[i];
							grade[i]=grade[j];
							grade[j]=t4;
						}
					}
				}
				head();
				under();
				for(i=0;i<n;i++){
					printf("%-7d %-10s %-10s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],gender[i],s1[i],s2[i],s3[i],total[i],avg[i],grade[i]);
				}
				under();
				printf("\n");
				break;
			}
			case 6:{
				int del;
				printf("Which id do you want to delete ?\n");
				printf("Enter id to delete : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==id[i]){
						for(j=i;j<n;j++){
							id[j]=id[j+1];
							strcpy(name[j],name[j+1]);
							strcpy(gender[j],gender[j+1]);
							s1[j]=s1[j+1];
							s2[j]=s2[j+1];
							s3[j]=s3[j+1];
							total[j]=total[j+1];
							avg[j]=avg[j+1];
							grade[j]=grade[j+1];
						}
						n--;
					}
				}
				break;
			}
			case 7:{
				int insert;
				printf("Where id do you want to insert?\n");
				printf("Enter id to insert : ");
				scanf("%d",&insert);
				for(i=0;i<n;i++){
					if(insert==id[i]){
						for(j=n;j>i;j--){
							id[j]=id[j-1];
							strcpy(name[j],name[j-1]);
							strcpy(gender[j],gender[j-1]);
							s1[j]=s1[j-1];
							s2[j]=s2[j-1];
							s3[j]=s3[j-1];
							total[j]=total[j-1];
							avg[j]=avg[j-1];
							grade[j]=grade[j-1];
						}
						n++;
						printf("=========> Student %d <===========\n",i+1);
						printf("Enter ID : ");
						scanf("%d",&id[i]);
						printf("Enter Name : ");
						fflush(stdin);gets(name[i]);
						printf("Enter Gender : ");
						gets(gender[i]);
						printf("Enter Math Score : ");
						scanf("%f",&s1[i]);
						printf("Enter Program Score : ");
						scanf("%f",&s2[i]);
						printf("Enter Khmer Score : ");
						scanf("%f",&s3[i]);
						total[i]  = Total(s1[i],s2[i],s3[i]);
						avg[i]    = Avg(total[i]);
						grade[i]  = Grade(avg[i]);
						break;
					}
				}
				
				break;
			}
			case 8:{
				int add;
				printf("How many students do you want to add more ?\n");
				printf("Enter value to add more students : ");
				scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("=========> Student %d <===========\n",i+1);
					printf("Enter ID : ");
					scanf("%d",&id[i]);
					printf("Enter Name : ");
					fflush(stdin);gets(name[i]);
					printf("Enter Gender : ");
					gets(gender[i]);
					printf("Enter Math Score : ");
					scanf("%f",&s1[i]);
					printf("Enter Program Score : ");
					scanf("%f",&s2[i]);
					printf("Enter Khmer Score : ");
					scanf("%f",&s3[i]);
					total[i]  = Total(s1[i],s2[i],s3[i]);
					avg[i]    = Avg(total[i]);
					grade[i]  = Grade(avg[i]);
				}
				n=n+add;
				break;
			}			
			case 9:case 0:{
				exit(1);  //  #include<stdlib.h>
				break;
			}
			case 10:{
				system("cls");   //  #include<stdlib.h>
				break;
			}
			default:{
				printf("\nThere is not option : %d\n\n",op);
				break;
			}
		}		
	}while(op!=0);
	printf("=========> Good Bye!!!\n");	
	
	return 0;
}
