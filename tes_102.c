#include<stdio.h>
int main(){
	
	float a[100];
	int n,i;
	
	
	printf("Input n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value : ");
		scanf("%f",&a[i]);
	}
	printf("-----------------\n");
	for(i=0;i<n;i++){
		printf("a[%d] = %.2f\n",i,a[i]);
	}
	printf("-----------------\n");
	for(i=0;i<n;i++){
		if(a[0]>a[i]){
			a[0]=a[i];
		}	
	}
	printf("The smallest number is : %.2f\n",a[0]);
	for(i=0;i<n;i++){
		if(a[0]<a[i]){
			a[0]=a[i];
		}	
	}
	printf("The largest number is : %.2f\n",a[0]);
	
	return 0;
}
