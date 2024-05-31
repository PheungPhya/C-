#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	float sum=0;
	int option;
	again:
	printf("[1]. Loop one\n");
	printf("[2]. Loop two\n");
	printf("[3]. Loop three\n");
	printf("[4]. Loop four\n");
	printf("[5]. Loop five\n");
	printf("================\n");
	printf("please choose one option : ");
	scanf("%d",&option);
	switch(option){
		case 1:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum=sum+i;  
					printf("%d + ",i);
				}
				printf("\b\b= %.f",sum);
			break;
		}
		case 2:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum=sum+sqrt(i);  
					printf("%.2f + ",sqrt(i));
				}
				printf("\b\b= %.2f",sum);
			break;
		}
		case 3:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum=sum+pow(i,2);  
					printf("%.f + ",pow(i,2));
				}
				printf("\b\b= %.f",sum);
			break;
		}
		case 4:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum=sum+pow(i,3);  
					printf("%.f + ",pow(i,3));
				}
				printf("\b\b= %.f",sum);
			break;
		}
		case 5:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum=sum+cos(i);  
					printf("%.2f + ",cos(i));
				}
				printf("\b\b= %.2f",sum);
			break;
		}
		default : {
			printf("You input wrong option!!\n");
			goto again;
			break;
		}
		
	}
	
	
	return 0;
}
