#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *ptr;
	int n1,n2,i;
	
	printf("Enter value n1 : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	for(i=0;i<n1;i++){
		printf("Enter value *ptr : ");
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n1;i++){
		printf("*(ptr+%d) = %d\n",i,*(ptr+i));
	}
	
	printf("Enter value n2 : ");
	scanf("%d",&n2);
	ptr=(int*)realloc(ptr,n2*sizeof(int));
	
	for(i=n1;i<n1+n2;i++){
		printf("Enter value *ptr : ");
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n1+n2;i++){
		printf("*(ptr+%d) = %d\n",i,*(ptr+i));
	}
	
	
	return 0;
}
