#include<stdio.h>
#include<string.h>
struct Worker{
	int id;
	char name[20];
	struct Date{
		char d_in[20];
		char d_out[20];
	}date;
};

int main(){	
	struct Worker w;
	printf("Ente id : ");
	scanf("%d",&w.id);
	printf("Enter name : ");
	scanf("%s",w.name);
	printf("Enter date_in : ");
	scanf("%s",&w.date.d_in);
	printf("Enter date_out : ");
	scanf("%s",&w.date.d_out);
	
	printf("id = %d\n",w.id);
	printf("name = %s\n",w.name);
	printf("Date_in = %s\n",w.date.d_in);
	printf("Date_out = %s\n",w.date.d_out);
	
	
	return 0;
}
