#include<stdio.h>
int main(){
	int a[20];
	int i,n,j;
	int del;
	
	printf("How many number do you want to input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n=========> Output <==========\n");
	for(i=0;i<n;i++){
		printf("Array a[%d] = %d\n",i,a[i]);
	}
	
	printf("\n Enter number to delete : ");
	scanf("%d",&del);
	for(i=0;i<n;i++){
		if(del==a[i]){
			for(j=i;j<n;j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
	printf("\n=========> After Delete <==========\n");
	for(i=0;i<n;i++){
		printf("Array a[%d] = %d\n",i,a[i]);
	}
	
	
	return 0;
}
