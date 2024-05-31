#include<stdio.h>
#include<string.h>
struct Person{
	int id;
	char name[20];
	char sex;
	float salary;
};

int main(){
	struct Person ps;
	
	printf("Enter id : ");
	scanf("%d",&ps.id);
	printf("Enter name : ");
	fflush(stdin);gets(ps.name);
	printf("Enter gender : ");
	scanf("%c",&ps.sex);
	printf("Enter Salary : ");
	scanf("%f",&ps.salary);
	
	printf("\n%-5s %-10s %-8s %-10s\n","ID","NAME","GENDER","SALARY");
	printf("%-5d %-10s %-8c $%-10.2f\n",ps.id,ps.name,ps.sex,ps.salary);
		
	return 0;
}
