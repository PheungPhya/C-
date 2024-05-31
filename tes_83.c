#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,j,op;
	int id[20];
	char name[20][30];
	float s1[20],s2[20],s3[20]
	
	void input(){
		printf("How many student do you want to input : ");
		scanf("%d",&n);
		for(i=0;i<n;i++){
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
		}
	}
	float total(){
		return s1[i]+s2[i]+s3[i];
	}
	
	float avg(){
		return total()/3;
	}
	
	char Grade(){
		char grade;
		if(avg()>=90 && avg()<=100){
			grade='A';
		}else if(avg()>=80 && avg()<90){
			grade='B';
		}else if(avg()>=70 && avg()<80){
			grade='C';
		}else if(avg()>=60 && avg()<70){
			grade='D';
		}else if(avg()>=50 && avg()<60){
			grade='E';
		}else{
			grade = 'F';
		}
		
		return grade;
	}
	
	void output(){			
			printf("%-8d %-12s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",id[i],name[i],s1[i],s2[i],s3[i],total(),avg(),Grade());	
		
	}
	
	void head(){
		printf("%-8s %-12s %-10s %-10s %-10s %-10s %-10s %-10s\n","ID","Name","Math","English","Khmer","Total","Average","Grade");
	}
	
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
				input();
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
				printf("Which id do you want to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==id[i]){
						head();
						output();
					}
				}
				break;
			} 
			default:{
				printf("please try again!!!\n");
				printf("no option number : %d\n\n",op);
				break;
			}
		}
		
		
		
		printf("Press Enter to continue => \n");
	}while(getch()==13);
	
	
	return 0;
}
