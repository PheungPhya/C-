#include<stdio.h>
int main(){
	float dollar,Reil,Bath,cash;
	int op;
	do{
		printf("[1].Change Money Reil to Dollar\n");
		printf("[2].Change Money Dollar to Riel\n");
		printf("[3].Change Reil to Bath\n");
		printf("[4]. For Exit\n");
		printf("-------------------------------\n");
		printf("Select one option :> ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
					printf("Enter Reil Money : ");
					scanf("%f",&Reil);
					cash = Reil / 4100;
					printf("Cash Reil to Dollar = $%.2f\n",cash);
				break;
			}
			case 2:{
					printf("Enter Dollar Money : ");
					scanf("%f",&dollar);
					cash = dollar * 4100;
					printf("Cash Dollar to Reil = %.2fReil\n",cash);
				break;
			}
			case 3:{
					printf("Enter Reil Money : ");
					scanf("%f",&Reil);
					cash = Reil / 127;
					printf("Cash Reil to Bath = %.2fBath\n",cash);
				break;
			}
			default:{
				printf("Try Againg!!!\n\n");
				break;
			}
		}
		
	}while(op!=4);
	
	return 0;
}
