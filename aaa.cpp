#include<stdio.h>
int main(){
	
	int array[10]={33,13,25,10,90};
	int i,j,temp[20];
		
	printf("------------ Use Loop----------\n");
	for(i=0;i<5;i++){
		printf("Array[%d] = %d\n",i,array[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i-1;j<5;j++){
			if(array[j]>array[j+1]){
				temp[j]=array[j];
				array[j]=array[j+1];
				array[j+1]=temp[j];
			}
		}
	}
	printf("------------ sort Loop----------\n");
	for(i=0;i<5;i++){
		printf("Array[%d] = %d\n",i,array[i]);
	}
	
	return 0;
}
