#include<stdio.h>
int main(){
	int x[4],i;
	
	for(i=0;i<4;i++){
		printf("x[%d] = %p\n",i,&x[i]);
	}
	
	for(i=0;i<4;i++){
		printf("Addres of (x+%d) = %p\n",i,(x+i));
	}
	
		
	return 0;	
}
