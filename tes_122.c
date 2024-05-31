#include<stdio.h>
int main(){
	int id[20];
	char name[30][30];
	char Grade;
	float s1[20],s2[20],s3[20];
	float Total[90];
	int i,n,op;
	
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
		printf("[9]. And [0]. For exit.\n");
		printf("--------------------\n");
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
		}
		
		
	}while(op!=0);
	
	
	
	
	
	return 0;
	
}
