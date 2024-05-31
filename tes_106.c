#include<stdio.h>
int main(){
	
	int a[20];
	int n,i,j,search,f=0;
	printf("Input n : ");
	scanf("%d",&n);
	
	printf("-----------> Input value <----------\n");
	for(i=0;i<n;i++){
		printf("Enter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("-----------> Output value <----------\n");
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("Input number for search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==a[i]){
			printf("a[%d] = %d\n",i,a[i]);
			f=1;
		}
	}
	if(f==1){
		printf("search success!\n");
	}else{
		printf("search false!\n");
	}
	
	
	
	return 0;
}
