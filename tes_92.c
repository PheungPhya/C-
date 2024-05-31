#include<stdio.h>
int main(){
	
	float Riel,Dollar,Cash;
	int op;
	do{
		printf("[1]. Change Riel to Dollar\n");
		printf("[2]. Change Dollar to Riel  \n");
		printf("[3]. Change Riel to Bath\n");
		printf("[4]. For Exit\n");
		printf("==============================\n");
		printf("Please Select one option : ");
		scanf("%d",&op);
				
		switch(op){
			case 1:{
					printf("Enter Riel Money : ");
					scanf("%f",&Riel);
					Cash = Riel / 4100;
					printf("Cash Dollar = %.2f $\n",Cash);
				break;
			}
			case 2:{
					printf("Enter Dollay Money : ");
					scanf("%f",&Dollar);
					Cash = Dollar * 4100;
					printf("Cash Riel Money : %.2f riel\n",Cash);
				break;
			}
			case 3:{
					printf("Enter Riel Money : ");
					scanf("%f",&Riel);
					Cash = Riel / 125;
					printf("Cash Bath Money : %.2f bath",Cash);
				break;
			}
			default:{
				printf("Please try again !!!\n");
				break;
			}
			
		}
		
	}while(op!=4);
	return 0;
}





