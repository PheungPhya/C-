#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *a;
	int i,j,n,op;
	do{
		printf("\n\n[1].Input\n");
		printf("[2].Output\n");
		printf("[3].Search\n");
		printf("[4].Clear\n");
		printf("[5].Update\n");
		printf("============\n");
		printf("choose one => ");
		scanf("%d",&op);		
		switch(op){
			case 1:{
				printf("how many value do you want to input : ");
				scanf("%d",&n);				
				a=(int *)malloc(n*sizeof(int));				
				for(i=0;i<n;i++){
					printf("Enter value : ");
					scanf("%d",(a+i));
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					printf("%d \t",*(a+i));
				}
				break;
			}
			case 3:{
				int search;
				printf("Enter number to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==*(a+i)){
						printf("The list has number %d\n",*(a+i));
					}
				}
				break;
			}
			case 4:{
				system("cls");
				break;
			}
			case 5:{
				int update;
				printf("Enter number to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==*(a+i)){
						printf("Enter value : ");
						scanf("%d",(a+i));
					}
				}
				break;
			}
			case 6:{
				int del;
				printf("Enter number to delele : ");
				scanf("%d",&del);
				for(i=0;i<n;i++){
					if(del==*(a+i)){
						for(j=i;j<n;j++){
							*(a+j)=*(a+j+1);
							//a[j]=a[j+1];
						}
						n--;
					}
				}
				break;
			}
		}		
	}while(op!=0);
	
		
	return 0;
}
