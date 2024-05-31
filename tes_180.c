#include<stdio.h>
#include<string.h>
struct Book{
	int id;				
	char title[20];		
	char author[20];	
	char subject[20];	
};

void Output(struct Book b1){
	printf("%d\t %s\t %s\t %s\n",b1.id,b1.title,b1.author,b1.subject);
}

int main(){
	struct Book b,b1;
	
	b.id=123;
	strcpy(b.title,"Rabin");
	strcpy(b.author,"Michail_Rabin");
	strcpy(b.subject,"Rabin_dancer");
	
	b1.id=234;
	strcpy(b1.title,"C/C++");
	strcpy(b1.author,"Linse");
	strcpy(b1.subject,"Program");
	
	Output(b);
	Output(b1);
	
	return 0;
}
