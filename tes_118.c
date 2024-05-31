#include<stdio.h>
int main(){
	
	int id[30];
	int n,i,j,add;
	printf("Input n : ");
	scanf("%d",&n);
	
	printf("---------> Input <------------\n");
	for(i=0;i<n;i++){
		printf("Input ID[%d] : ",i);
		scanf("%d",&id[i]);
	}
	printf("---------> Output <-----------\n");
	for(i=0;i<n;i++){
		printf("ID[%d] : %d\n",i,id[i]);
	}
	printf("---------> Add <-----------\n");
	printf("How many do you want to add : ");
	scanf("%d",&add);
	
	for(i=n;i<n+add;i++){
		printf("Input ID[%d] : ",i);
		scanf("%d",&id[i]);
	}
	n=n+add;
	printf("---------> After Add <-----------\n");
	for(i=0;i<n;i++){
		printf("ID[%d] : %d\n",i,id[i]);
	}
	
	
	
	return 0;
}
