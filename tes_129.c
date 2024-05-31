#include<stdio.h>
#include<string.h>
struct Student{
	int id;
	int age;
	char name[20];
	char gender;	
};

int main(){
	struct Student obj,obj2;
	printf("Enter id : ");
	scanf("%d",&obj.id);
	
	printf("Enter name  : ");
	fflush(stdin);gets(obj.name);
	
	printf("%d\t %s\t\n",obj.id,obj.name);
		
	return 0;
}
