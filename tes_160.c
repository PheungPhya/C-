#include<stdio.h>
struct employee{
	int id;
	char name[20];
	float salary;
	char position[20];
	
	void input(){
		printf("Enter id : ");
		scanf("%d",&id);
		printf("Enter name : ");
		fflush(stdin);gets(name);
		printf("Enter position : ");
		gets(position);
		printf("Enter salary : ");
		scanf("%f",&salary);
	}
	void output(){
		printf("ID = %d\n",id);
		printf("Name : %s\n",name);
		printf("Position : %s\n",position);
		printf("Salary  : %.2$\n",salary);
	}

}; 

int main(){
	
	struct employee emp;
	emp.input();
	emp.output();
	
	
	return 0;
}
