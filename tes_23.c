#include<stdio.h>
#include<math.h>

int main(){
	int i,n,sum=0,a;
	int op;
	printf("[1]. Loop sum\n");
	printf("[2]. Loop sqrt\n");
	printf("[3]. Loop pow(3)\n");
	printf("[4]. Loop cos\n");
	printf("===================\n");
	printf("Please choose one : ");
	scanf("%d",&op);
	switch(op){
		case 1:{
				printf("Input n : ");
				scanf("%d",&n);
				for(i=1;i<=n;i++){
					sum = sum + i;
					printf("%d + ",i);
				}	
				printf("\b\b= %d",sum);
			
			break;
		}
		case 2:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum = sum + sqrt(i);
					printf("%d + ",sqrt(i));
				}	
				printf("\b\b\b= %d",sum);
	
			break;
		}
		case 3:{
				printf("Input n : ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					sum = sum + pow(i,3);
					a=pow(i,3);
					printf("%d + ",a);
				}	
				printf("\b\b= %d",sum);
			break;
		}
		case 4:{
				float sum1,b;
				printf("Input n : ");
				scanf("%d",&n);
				for(i=1;i<=n;i++){
					sum1=sum1+cos(i);
					b=cos(i);
					printf("%f + ",b);
				}	
				printf("\b\b=%f",sum1);
			break;
		}
		default:{
			printf("You input worng option!");
			break;
		}
	}

	
	return 0;
}
