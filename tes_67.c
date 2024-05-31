#include<stdio.h>
int main(){
	
	int n;
	printf("Input a number : ");
	scanf("%d",&n);
	
	if(n==0){
		printf("not prime number.");
	}else if(n==1 || n==2 || n==3 || n==5 || n==7){
		printf("prime number.");
	}else if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
		printf("Not prime number.");
	}else {
		printf("Prime number");
	}
	
	return 0;
}
