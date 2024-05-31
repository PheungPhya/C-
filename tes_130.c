#include<stdio.h>
#include<stdlib.h>
int main(){
	int t_in,t_out,total,op;
	do{
		printf("[1]. Bicycle\n");
		printf("[2]. Motor Bike\n");
		printf("[3]. Car\n");
		printf("[4]. Clear\n");
		printf("[5]. And [0]. for exit\n");
		printf("-----------------------\n");
		printf("Enter one option : ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
					printf("Enter Time In : ");
					scanf("%d",&t_in);
					printf("Enter Time Out : ");
					scanf("%d",&t_out);
					
					if(t_in >= 6 && t_in <=11 && t_out >=6 && t_out <=11){
						printf("You must pay 300KHR\n");
					}else{
						printf("You must pay 500KHR\n");
					}				
					printf("\n");
					if(t_in > t_out){
						total = t_out - t_in + 24 ;
					}else if(t_in < t_out){
						total = t_out - t_in ;
					}else{
						total = t_out - t_in;
					}
					printf("Parking time is : %d\n",total);
		
				break;
			}
			case 2:{
					printf("Enter Time In : ");
					scanf("%d",&t_in);
					printf("Enter Time Out : ");
					scanf("%d",&t_out);
					
					if(t_in >= 6 && t_in <=11 && t_out >=6 && t_out <=11){
						printf("You must pay 500KHR\n");
					}else{
						printf("You must pay 1000KHR\n");
					}
				
					// another condition
					if(t_in > t_out){
						total = t_out - t_in + 24 ;
					}else if(t_in < t_out){
						total = t_out - t_in ;
					}else{
						total = t_out - t_in;
					}
					printf("Parking time is : %d\n",total);
	
				break;
			}
			case 3:{
					printf("Enter Time In : ");
					scanf("%d",&t_in);
					printf("Enter Time Out : ");
					scanf("%d",&t_out);
					
					if(t_in >= 6 && t_in <=11 && t_out >=6 && t_out <=11){
						printf("You must pay 2000KHR\n");
					}else{
						printf("You must pay 5000KHR\n");
					}
				
					// another condition
					if(t_in > t_out){
						total = t_out - t_in + 24 ;
					}else if(t_in < t_out){
						total = t_out - t_in ;
					}else{
						total = t_out - t_in;
					}
					printf("Parking time is : %d\n",total);
	
				break;
			}
			case 4:{
				system("cls");
				break;
			}
			case 5: case 0:{
				exit(1);
				break;
			}
			default:{
				printf("Please Try Again!!\n\n");
				break;
			}
		}
		
		
	}while(op!=0);
	
	
	
	return 0;
}
