#include<stdio.h>
struct employee{
	int id;
	char name[20];
	float salary;
	char position[20];
	void input(){
		printf("Enter id : ");
		scanf("%d",&id);
	}
	void put(){
		printf("ID : %d\n",id);
	}
};  



int main(){
	
	struct employee emp1;
	emp1.input();
	emp1.put();
	
	return 0;
}
