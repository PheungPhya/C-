#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int menu(){
	std::cout<<"Hello world\n";
	int op;
	printf("[1]. Input\n");
	printf("[2]. Output\n");
	printf("[3]. Search\n");
	printf("[4]. Update\n");
	printf("[5]. Delete\n");
	printf("===============>\n");
	printf("Choos one Option => ");
	scanf("%d",&op);
	return op;
}

int main(){
	
	int *ptr;
	char status[10];
	do{
		switch(menu()){
			
		}
		
		
		printf("Do you want to continue [Y=Yes / N=No]=> ");
		scanf("%s",&status);
	}while(!stricmp(status,"Y"));
	printf("\n\n Good Bye!!!");
		
	
	return 0;
}
