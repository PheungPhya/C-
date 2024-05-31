#include<stdio.h>
int main(){
	float n;
	printf("Enter number : ");
	scanf("%f",&n);
	
	if(n< 0.0){
		printf("You entered number negative");
	}else if(n==0){
		printf("You entered number 0");
	}else{
		printf("You entered number positive");
	}
	
	return 0;
}
