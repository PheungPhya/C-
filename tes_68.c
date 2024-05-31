#include<stdio.h>
#include<string.h>
int main(){
	
	int number[50],i,n;
	
	printf("Input n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value number[%d] : ",i);
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;i++){		
		printf("number[%d] = %d\n",i,number[i]);	
	}
	printf("==============================\n");
	
	for(i=0;i<n;i++){
		if(number[0]>number[i]){
			number[0]=number[i];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
		}
	}
	
	printf("The smallest is : %d",number[0]);
	return 0;
}
