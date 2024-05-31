#include<stdio.h>
#include<iostream>
int main(){
	
	int a,b,c,max;
	printf("Input a : ");scanf("%d",&a);
	printf("Input b : ");scanf("%d",&b);
	printf("Input c : ");scanf("%d",&c);
	
	max = a;  // a=10; b=20; c=30;
	if(max<b){
		max = b;
	}
	if(max<c){
		max=c;
	}
	cout<<"Max = "<<max;
	
	
	return 0;
}
