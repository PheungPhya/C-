#include<stdio.h>
int main(){
	
	float a[30]={12.3,42.4532};
	int i,n;

	printf("How many nubmer do you want to input : ");
	scanf("%d",&n);
	
	printf("==========> Input <=========\n");
	for(i=0;i<n;i++){
		printf("Enter number : ");
		scanf("%f",&a[i]);
	}
	printf("==========> Output <=========\n");
	for(i=0;i<n;i++){
		printf("Number a[%d] = %.2f\n",i,a[i]);
	}
	
	
	return 0;
}
