#include<stdio.h>
#include<stdlib.h>
struct Student{
	int id;
	char name[20],gender[20];
	float score;
};


int main(){
	struct Student *stu;
	int n,i,j;
	
	printf("Enter number of Student :>>> ");
	scanf("%d",&n);
	stu = (struct Student*)malloc(n*sizeof(struct Student));
	
	for(i=0;i<n;i++){
		printf("\n =====> Student %d\n",i+1);
		printf("Enter id : ");
		scanf("%d",&(stu+i)->id);
		printf("Enter name : ");
		fflush(stdin);gets((stu+i)->name);
		printf("Enter gender : ");
		gets((stu+i)->gender);
		printf("Enter Score  : ");
		scanf("%f",&(stu+i)->score);
	}
	
	for(i=0;i<n;i++){
		printf("=====================================\n");
		printf("%-8d %-10s %-10s %-10.2f\n",(stu+i)->id,(stu+i)->name,(stu+i)->gender,(stu+i)->score);  // stu[i].id
	}
	
	int search;
	printf("Enter id to search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==(stu+i)->id){
			printf("=====================================\n");
			printf("%-8d %-10s %-10s %-10.2f\n",(stu+i)->id,(stu+i)->name,(stu+i)->gender,(stu+i)->score);
		}
	}
	
	int del;
	printf("Enter id to delete : ");
	scanf("%d",&del);
	for(i=0;i<n;i++){
		if(del==(stu+i)->id){
			for(j=i;j<n;j++){
				*(stu+j)=*(stu+j+1);
				//stu[j]=stu[j+1];
			}
			n--;
		}
	}
	
	for(i=0;i<n;i++){
		printf("=====================================\n");
		printf("%-8d %-10s %-10s %-10.2f\n",(stu+i)->id,(stu+i)->name,(stu+i)->gender,(stu+i)->score);  // stu[i].id
	}
	
	return 0;
}
