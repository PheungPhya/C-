#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[20];
	char position[20];
	float salary;
};

int main(){
	struct Employee emp[20];
	int n,i;
	printf("how many employee do you want to input : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter id       : ");  
		scanf("%d",&emp[i].id);
		printf("Enter Name     : ");
		fflush(stdin);gets(emp[i].name);
		printf("Enter position : ");
		gets(emp[i].position);
		printf("Enter Salary   : ");
		scanf("%f",&emp[i].salary);
	}
	for(i=0;i<n;i++){
		printf("%d\t %s\t %s\t $%.2f\n",emp[i].id,emp[i].name,emp[i].position,emp[i].salary);
	}			
	return 0;
}
