#include<stdio.h>
#include<string.h>
int main(){
	
	int sum,i,n;
	char status[20];
	int op;
	do{
		printf("[1]. 1+2+3+..+n\n");
		printf("[2]. 1*2*3*..*n\n");
		printf("================\n");
		printf("Input one option : ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				sum=0;
				printf("Input n : ");scanf("%d",&n);
				for(i=1;i<=n;i++){
					sum=sum+i;
					printf("%d + ",i);
				}
				printf("\b\b = %d\n",sum);
				break;
			}
			case 2:{
				sum=1;
				printf("Input n : ");scanf("%d",&n);
				for(i=1;i<=n;i++){
					sum=sum*i;
					printf("%d * ",i);
				}
				printf("\b\b = %d\n",sum);
				break;
			}
			default :{
		   		printf("Yoooou enter wrong option\n");
				break;
			}		
		}
		printf("\nDo you want to continue [ y=yes / n=no ]: ");
		scanf("%s",&status);
	}while(stricmp(status,"y")==0);
	
	return 0;
}
