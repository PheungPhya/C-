#include<stdio.h>
int main(){
	int n;
	printf("Enter number = ");
	scanf("%d",&n);
	
	if(n==0){
		printf("not prime number");
	}else if(n==1 || n==2 || n==3 || n==5 || n==7 || n==11){
		printf("prime number");
		
	}else if( !(n%2) || !(n%3) || !(n%5) || !(n%7) || !(n%11) ){
		printf("not prime number");
		
	}else {
		printf("prime number");
	}
	
	return 0;
}
