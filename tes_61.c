#include<stdio.h>
int main(){
	int i,j,n;
	int a[50];
	
	printf("How many number do you want to input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value : ");
		scanf("%d",&a[i]);
		printf("\n");
	}
	int temp[50];
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				temp[j]=a[j];
				a[j]=a[j+1];
				a[j+1]=temp[j];
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	
	
	return 0;
}
