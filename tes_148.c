#include<stdio.h>
struct Teacher{
	int id;
	char name[20];
	char position[20];
	
	struct Date{
		int dd;
		char mm[20];
		int year;
	}dob;
};

int main(){
	struct Teacher t;
	
	printf("Enter id : ");
	scanf("%d",&t.id);
	
	printf("Enter Day : ");
	scanf("%d",&t.dob.dd);
	
	printf("Id is : %d\n",t.id);
	printf("day is : %d\n",t.dob.dd);
	
	return 0;
}
