#include<stdio.h>
int main(){
	
	int id[5]={10,45,6,90,12};
	int i,j,temp;
	printf("%d ",id[0]);
	printf("%d ",id[1]);
	printf("%d ",id[2]);
	printf("%d ",id[3]);
	printf("%d ",id[4]);
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",id[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(id[i]<id[j]){
				temp=id[i];
				id[i]=id[j];
				id[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",id[i]);
	}
	
	
	
	return 0;
}
