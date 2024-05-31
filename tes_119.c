#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *ptr;
	int n,i;
	printf("Input n : ");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof (int));
	
	for(i=0;i<n;i++){
		printf("Input ptr : ");
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++){
		printf("%d  ",*(ptr+i));		
	}
		
	return 0;
}
