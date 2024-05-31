#include<stdio.h>
int main(){
	
	int a,b;
	char option;
	printf("Input a : "); scanf("%d",&a);
	printf("Input b : "); scanf("%d",&b);
	printf("Please choose one [+,-,*,/] : ");  scanf("%c",&option);
	
	switch(option){
		case '+':{
			printf("%d + %d = %d",a,b,a+b);
			break;
		}
		case '-':{
			printf("%d - %d = %d",a,b,a-b);
			
		}
	}
	
	
	
	
	return 0;
}
