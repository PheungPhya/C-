#include<stdio.h>
int main(){
	
	int id;
	char name[20];
	char gender;
	float score;
	
	printf("Enter Id : ");
	scanf("%d",&id);
	printf("Enter name : ");
	fflush(stdin);gets(name);
	printf("Enter gender : ");
	scanf("%c",&gender);
	printf("Enter score  : ");
	scanf("%f",&score);
	
	printf("=================================\n");
	printf(" Id     Name     Gender   Score\n");
	printf("%d     %s        %c      %.2f\n",id,name,gender,score);
	
	return 0;
}
