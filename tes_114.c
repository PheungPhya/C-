#include<stdio.h>
int main(){
	int arr[30];
	int n,i,j,update,del;
	printf("Input n  : ");
	scanf("%d",&n);
	printf("--------> Input <------------\n");
	for(i=0;i<n;i++){
		printf("Input Array[%d] = ",i);
		scanf("%d",&arr[i]);			 
	}
	printf("--------> Output <------------\n");
	for(i=0;i<n;i++){
		printf("Array[%d] = %d\n",i,arr[i]);				
	}

	printf("--------> Delete <------------\n");
	printf("Input number you want delete : ");
	scanf("%d",&del);
	for(i=0;i<n;i++){ 
		if(del==arr[i]){
			for(j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
			n--;
		}
	}
	printf("--------> After delete <------------\n");
	for(i=0;i<n;i++){
		printf("Array[%d] = %d\n",i,arr[i]);				
	}
	
	return 0;
}
