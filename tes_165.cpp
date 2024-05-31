#include<stdio.h>
#include<stdlib.h>
struct Student{
	int id;
	char name[20];
	char gender;
	int age ;
};
int main(){
	struct Student *stu;
	int i,j,n;
	int search;
	
	printf("How many student to do you to roll : ");
	scanf("%d",&n);
	stu = (struct Student*)malloc(n*sizeof(struct Student));
	
	for(i=0;i<n;i++){
		printf("Enter id : ");
		scanf("%d",&(stu+i)->id);
		printf("Enter name : ");
		fflush(stdin);gets((stu+i)->name);
		printf("Enter Gender : ");
		scanf("%c",&(stu+i)->gender);
		printf("Enter Age   : ");
		scanf("%d",&(stu+i)->age);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%-5d %-10s %-10c %-10d\n",(stu+i)->id,(stu+i)->name,(stu+i)->gender,(stu+i)->age);
	}
	
	printf("\nEnter id to Search => ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==(stu+i)->id){  // search==stu[i].id
			printf("%-5d %-10s %-10c %-10d\n",(stu+i)->id,(stu+i)->name,(stu+i)->gender,(stu+i)->age);
		}
	}
	
	
	
	
	
	return 0;
}
