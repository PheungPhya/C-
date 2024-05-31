#include<stdio.h>
#include<string.h>

struct Person{
	int id;
	char name[20];
	char sex[20];
	float salary;
};

struct Person Input(){
	struct Person p;
	printf("Enter id : ");
	scanf("%d",&p.id);
	printf("Enter name : ");
	fflush(stdin);gets(p.name);
	printf("Enter gender : ");
	gets(p.sex);
	printf("Enter salary : ");
	scanf("%f",&p.salary);
	return p;
}

void Show(struct Person p2){
	
	printf("%d\t %s\t %s\t %.2f$\n",p2.id,p2.name,p2.sex,p2.salary);
}

int main(){
	struct Person p1[30];
	int i,n;
	printf("Input n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("====> Person %d\n",i+1);
		p1[i]=Input();
	}
	for(i=0;i<n;i++){
		Show(p1[i]);
	}
	
	
	
	return 0;
}
