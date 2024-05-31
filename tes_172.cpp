#include<stdio.h>

struct Teacher{
	int id;
	char name[20];
	
	struct Salary{
		float salary;
		char date[40];
	}sal;
};

int main(){
	
	struct Teacher t;
	
	printf("Enter id : ");
	scanf("%d",&t.id);
	printf("Enter name : ");
	fflush(stdin);gets(t.name);
	printf("Enter Salary : ");
	scanf("%f",&t.sal.salary);
	printf("Enter Date : ");
	fflush(stdin);gets(t.sal.date);
		
	printf("\n\n\n\n");
	printf("%-8d %-10s %-10.2f %-15s\n",t.id,t.name,t.sal.salary,t.sal.date);	
	
	return 0;
}
