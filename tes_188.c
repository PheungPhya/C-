#include<stdio.h>
struct Student{
	int id;
	char name[20];
	char gender[20];
	float score;
};

struct Student Input(){
	struct Student s;
	printf("Enter id : ");
	scanf("%d",&s.id);
	printf("Enter name : ");
	scanf("%s",&s.name);
	printf("Enter gender : ");
	scanf("%s",&s.gender);
	printf("Enter score : ");
	scanf("%f",&s.score);
	
	return s;
};

void Show(struct Student stu){
	printf("%-5d %-10s %-10s %-10.2f\n",stu.id,stu.name,stu.gender,stu.score);
}

int main(){
	struct Student stu[10],temp_stu;
	int i,j,n;
	
	printf("Enter number of Student => ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("======> Student %d\n",i+1);
		stu[i]=Input();
	}
	printf("\n");
	for(i=0;i<n;i++){
		Show(stu[i]);
	}
	
	// insert
	int insert;
	printf("Enter id to insert : ");
	scanf("%d",&insert);
	for(i=0;i<n;i++){
		if(insert==stu[i].id){
			for(j=n;j>i;j--){
				stu[j]=stu[j-1];
			}
			stu[i]=Input();
			n++;
			break;
		}
	}
	 
	
	return 0;
}
