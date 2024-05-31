#include<stdio.h>
int main(){
	int a[30];
	int i,j,n,sort;
	
	printf("Input n : ");
	scanf("%d",&n);
	printf("===========> Input <==========\n");
	for(i=0;i<n;i++){
		printf("Enter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("===========> Output <=========\n");
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i] < a[j]){
				sort=a[i];
				a[i]=a[j];
				a[j]=sort;
			}
		}
	}
	printf("===========> After Sort <=========\n");
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	return 0;
}
