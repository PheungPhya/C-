#include<stdio.h>
#include<windows.h>
int main(){
	int i;
	
	for(i=20;i>=2;i-=2){    	
		printf("%d  ",i);	
	}
	printf("\n");
	for(i=19;i>=1;i-=2){
		printf("%d  ",i);
	}
	
	return 0;
}
