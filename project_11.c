#include<stdio.h>

struct Student{
	int id;
	char name[20];
	char gender[20];
	float s1,s2,s3;
};

struct Student Input(){
	struct Student st;
	
	printf("Enter id : ");
	scanf("%d",&st.id); 
	printf("Enter name : ");
	fflush(stdin);gets(st.name);
	printf("Enter gender : ");
	gets(st.gender);
	printf("Enter score1 : ");
	scanf("%f",&st.s1);
	printf("Enter score1 : ");
	scanf("%f",&st.s2);
	printf("Enter score1 : ");
	scanf("%f",&st.s3);
	
	return st;
}

void Output(struct Student st){
	printf("%-5d %-10s %-10s %-10.2f %-10.2f %-10.2f\n",st.id,st.name,st.gender,st.s1,st.s2,st.s3);
}

int main(){
	
	struct Student stu[10];
	int i,j,n,op;
	
	do{
		printf("[1]. Input\n");
		printf("[2]. Output\n");
		printf("[3]. Search\n");
		printf("[4]. Update\n");
		printf("[5]. Delete\n");
		printf("==============\n");
		printf("Select one option : ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("Enter number of student : ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("\n======> Student %d\n",i+1);
					stu[i]=Input();
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					Output(stu[i]);
				}
				break;
			}
			case 3:{
				int search;
				printf("Enter id student to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==stu[i].id){
						Output(stu[i]);
					}
				}
				break;
			}
			case 4:{
				int update;
				printf("Enter id student to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==stu[i].id){
						printf("\n======>Update Student %d\n",i+1);
						stu[i]=Input();
					}
				}
				break;
			}
			case 5:{
				int del;
				printf("Enter id student to delete : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==stu[i].id){
						for(j=i;j<n;j++){
							stu[j]=stu[j+1];
						}
						n--;
					}
				}
				break;
			}
		}	
	}while(1);

	
	return 0;
}
