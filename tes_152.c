#include<stdio.h>
int main(){
	
	int arr[20];
	int i,j,n,sort;
	printf("Input n : ");
	scanf("%d",&n);
	
	printf("===========> Input <=========\n");
	for(i=0;i<n;i++){
		printf("%d. Enter value : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("===========> Output <=========\n");
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				sort=arr[i];
				arr[i]=arr[j];
				arr[j]=sort;
			}
		}
	}
	
	printf("===========> After Sort <=========\n");
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
