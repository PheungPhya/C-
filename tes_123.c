#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *ptr;
	int i,n,n1;
	
	printf("Enter n : ");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){                 //n=3
		printf("Enter ptr : ");
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++){
		printf("*(ptr+%d) : %d\n",i,*(ptr+i));
	}
	printf("Enter n1 : ");
	scanf("%d",&n1);    // n1=2
	ptr=(int *)realloc(ptr,n1*sizeof(int*));
	for(i=n;i<n1+n;i++){
		printf("Enter ptr : ");
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n+n1;i++){
		printf("*(ptr+%d) : %d\n",i,*(ptr+i));
	}
	
	return 0;
}
