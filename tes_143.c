#include<stdio.h>
int main(){
	
	int a[30];
	int n,i,j,del;
	int insert;
	printf("How many number do you want to input : ");
	scanf("%d",&n);
	
	printf("=========> Input <=========\n");
	for(i=0;i<n;i++){
		printf("%d. Enter value : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("=========> Output <=========\n");
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}

	printf("Where number do you want to insert ?\n");
	printf("Enter number to insert : ");
	scanf("%d",&insert);
	
	for(i=0;i<n;i++){
		if(insert==a[i]){
			for(j=n;j>i;j--){
				a[j]=a[j-1];
			}
			printf("%d. Enter value : ",i+1);
			scanf("%d",&a[i]);
			n++;
			i++;
		}
	}
	
	printf("=========> After Insert <=========\n");
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	return 0;
}
