#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *pt;
	
	pt=(int*)calloc(3,sizeof(int));
	//  pt=(int*)malloc(3*sizeof(int));
	
	printf("Enter value : ");
	scanf("%d",pt);
	printf("Enter value : ");
	scanf("%d",pt+1);
	printf("Enter value : ");
	scanf("%d",pt+2);
	
	printf("%d  %d  %d ",*(pt+0),*(pt+1),*(pt+2));
	
	return 0;
}
