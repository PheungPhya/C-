#include<stdio.h>
int main(){
	
	int arr[20],insert;
	int i,n,j;
	printf("How many number do you want to input : ");
	scanf("%d",&n);
	
	printf("================> Input <================\n");
	for(i=0;i<n;i++){
		printf("Input Array[%d] : ",i);  
		scanf("%d",&arr[i]);
	}
	printf("========> Output Before Insert <==========\n");
	for(i=0;i<n;i++){
		printf("Array[%d] : %d\n",i,arr[i]);	
	}
	printf("Where do you want to insert : ");
	scanf("%d",&insert);
	for(i=0;i<n;i++){	
		if(arr[i]==insert){
			for(j=n;j>=i;j--){
				arr[j]=arr[j-1];
			}	
			printf("Input Array[%d] : ",i);
			scanf("%d",&arr[i]);
			i++;
			n++;
		}
	}
	printf("========> Output After Insert <==========\n");
	for(i=0;i<n;i++){
		printf("Array[%d] : %d\n",i,arr[i]);	
	}
	
	
	return 0;
}
