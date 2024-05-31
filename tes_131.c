#include<stdio.h>
int main(){
	
	int id[20];
	int i,n,search;
	printf("How many id do you want to input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter id[%d] : ",i);
		scanf("%d",&id[i]);
	}
	printf("================> Output <===============\n");
	for(i=0;i<n;i++){
		printf("Id[%d] : %d\n",i,id[i]);
	}
	printf("Which id do you want to search : ");
	scanf("%d",&search);
	printf("================> After Search <===============\n");
	for(i=0;i<n;i++){
		if(search==id[i]){
			printf("You have search Id[%d] : %d\n",i,id[i]);
		}
	}
	
	
	
	return 0;
}
