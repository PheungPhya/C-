#include<stdio.h>
int main(){
	
	float arr[]={12.3,45,32.5,34,55.,63,56,66,7,7,77,7,7,7,7,3,3,3,3,6,36,3};
	int i;
	
	for(i=0;i<sizeof(arr)/sizeof(float);i++){
		printf("arr[%d] = %.2f\n",i,arr[i]);
	}
	
	
	return 0;
}
