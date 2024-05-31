#include<stdio.h>
#include<windows.h>
int main(){
	
	int a,b;
	char option;
	system("color ");
	printf("Please choose one [+,-,*,/] : ");fflush(stdin);
	option = getchar();
	
	switch(option){
		case '+':{
			int option1;
			printf("How many operator you to sum [>=2]: ");fflush(stdin);option1=getchar();
			switch(option1){
				case '2':{
						printf("Input a : "); scanf("%d",&a);
						printf("Input b : "); scanf("%d",&b);
						printf("%d + %d = %d",a,b,a+b);
					break;
				}
				case '3':{
						
						int c;
						printf("Input a : "); scanf("%d",&a);
						printf("Input b : "); scanf("%d",&b);
						printf("Input c : "); scanf("%d",&c);
						printf("%d + %d + %d = %d",a,b,c,a+b+c);
				break;	
				}
			}
			break;
		}
		case '-':{
			printf("Input a : "); scanf("%d",&a);
			printf("Input b : "); scanf("%d",&b);
			printf("%d - %d = %d",a,b,a-b);
			break;	
		}
		case '*':{
			printf("Input a : "); scanf("%d",&a);
			printf("Input b : "); scanf("%d",&b);
			printf("%d * %d = %d",a,b,a*b);	
			break;
		}
		case '/':{
			printf("Input a : "); scanf("%d",&a);
			printf("Input b : "); scanf("%d",&b);
			if(a>b){
				printf("a is greater than b \n");
				printf("%d / %d = %d",a,b,a/b);
			}else{
				printf("a must be greater than b");
			}
			break;
		}
		default :{
			printf("You input wrong option !");
			break;
		}
	}	
	return 0;
}
