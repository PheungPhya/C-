#include<stdio.h>
int main(){
	
	int id[20];
	int n,i,j;

	printf("Input n : ");
	scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("Enter id[%d] : ",i);
			scanf("%d",&id[i]);
		}

	printf("\nbefore delete\n\n");
		for(i=0;i<n;i++){
			printf("id[%d] : %d \n",i,id[i]);
		}
	
	// delete
	
	int del;
	printf("Enter id you want to delete : ");
	scanf("%d",&del);
	
	for(i=0;i<n;i++){
		if(del==id[i]){
			for(j=i;j<n;j++){
				id[j]=id[j+1];
			}
			n--;
		}
	}

	printf("\nafter delete\n\n");
		for(i=0;i<n;i++){
			printf("id[%d] : %d \n",i,id[i]);
		}
	
	return 0;
}
