#include<stdio.h>
int main(){
	
	float number;
	printf("Enter number : ");
	scanf("%f",&number);
	
	
	if(number>0){
		printf("positive number!");
	}else if(number < 0){
		printf("negative number!");
	}else{
		printf("entered 0");
	}
	
	
	return 0;
}
