#include<stdio.h>
int main(){
	
	int a[20];
	int i=0,n;

	printf("how much number do you want to input : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter number a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<n;i++){
		printf("a[%d] = %d \n",i,a[i]);
	}
	
	
	return 0;
}
