#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	int id;
	char name[20];
	char gender[20];
	float score;
};

int main(){
	
	struct student obj[30];	
	int i,n,search;
	
	printf("How many student do you want to input : ");
	scanf("%d",&n);
	
	printf("=============> Input <============\n");
	for(i=0;i<n;i++){
		printf("\n====> Studnet %d\n",i+1);
		printf("Enter id : "); scanf("%d",&obj[i].id);
		printf("Enter name : "); fflush(stdin); gets(obj[i].name);
		printf("Enter Gender : ");gets(obj[i].gender);
		printf("Enter Score  : ");scanf("%f",&obj[i].score);
	}
	printf("=============> Output <============\n\n");
	for(i=0;i<n;i++){
		printf("%-5d %-10s %-10s %-10.2f\n",obj[i].id,obj[i].name,obj[i].gender,obj[i].score);
	}
	system("cls");// #include<stdlib.h>
	printf("Input id to search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==obj[i].id){
			printf("%-5d %-10s %-10s %-10.2f\n",obj[i].id,obj[i].name,obj[i].gender,obj[i].score);
		}
	}
	
	return 0;
}
