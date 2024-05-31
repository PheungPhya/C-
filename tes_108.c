#include<stdio.h>
int main(){
	
	int n;
	printf("Input a number : ");
	scanf("%d",&n);
	
	if(n==0){
		printf("number %d not prime number.",n);
		
	}else if(n==1 || n==2 || n==3 || n==5 || n==7 || n==11 || n==13){
		printf("number %d is prime number.",n);
		
	}else if(n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0 || n%13==0){
		printf("number %d not prime number.",n);
		
	}else{
		printf("number %d is prime number.",n);
	}
	
	return 0;
}
