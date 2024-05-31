#include<stdio.h>
#include<math.h>
int main(){
	
	int option,i,n;
	printf("[1]. 1+2+...+n \n");
	printf("[2]. pow(1,2)+pow(2,2)+...+pow(n,2) \n");
	printf("[3]. pow(2,3)+pow(3,3)+...+pow(n,3) \n");
	printf("[4]. cos(1)+cos(2)+...+cos(n)\n");
	printf("[5]. sqry(1)+sqrt(2)+...+sqrt(n)\n");
	printf("--------------------------------------\n");
	printf("Enter one option : ");
	scanf("%d",&option);
	
	switch(option){
		case 1:{
			int sum=0;
			printf("-------------------\n");
			printf("Input n : ");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
				sum = sum + i;
				printf("%d + ",i);
			}
			printf("\b\b= %d\n",sum);
			break;
		}
		case 2:{
			int sum=0;
			printf("-------------------\n");
			printf("Input n : ");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
				sum = sum + pow(i,2);
				printf("%.f + ",pow(i,2));
			}
			printf("\b\b= %d\n",sum);
			break;
		}
		case 3:{
			int sum=0;
			printf("-------------------\n");
			printf("Input n : ");
			scanf("%d",&n);
			for(i=2;i<=n;i++){
				sum = sum + pow(i,3);
				printf("%.f + ",pow(i,3));
			}
			printf("\b\b= %d\n",sum);
			break;
		}
		case 4:{
			float sum=0;
			printf("-------------------\n");
			printf("Input n : ");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
				sum = sum + cos(i);
				printf("%.2f + ",cos(i));
			}
			printf("\b\b= %.2f\n",sum);
			break;
		}
		case 5:{
			float sum=0;
			printf("-------------------\n");
			printf("Input n : ");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
				sum = sum + sqrt(i);
				printf("%.2f + ",sqrt(i));
			}
			printf("\b\b= %.2f\n",sum);
			break;
		}
		default:{
			printf("-------------------\n");
			printf("Please try again .!!!n");
			break;
		}
	}
	return 0;
}
