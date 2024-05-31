#include<stdio.h>
int main(){
	int a[30];
	int n,i,j,temp,search;
		
	printf("Input n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){     
		printf("Enter Array a[%d] = ",i); 
		scanf("%d",&a[i]);	
	}
	printf("===========> Output <===========\n");
	for(i=0;i<n;i++){
		printf("Array a[%d] = %d\n",i,a[i]);
	}
	printf("===========> After Sort <============\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}	
	for(i=0;i<n;i++){
		printf("Array a[%d] = %d\n",i,a[i]);
	}
	printf("==========> Search <============\n");
	printf("Enter number to search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==a[i]){
			printf("It has number : %d\n",a[i]);
		}
	}
	printf("============> Update <=========\n");
	int update;
	printf("Enter number to update : ");
	scanf("%d",&update);
	for(i=0;i<n;i++){
		if(update==a[i]){
			printf("Enter Array a[%d] = ",i); 
			scanf("%d",&a[i]);	
		}
	}
	for(i=0;i<n;i++){
		printf("Array a[%d] = %d\n",i,a[i]);
	}	
	return 0;
}
