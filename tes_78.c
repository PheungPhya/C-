#include<stdio.h>
#include<iostream>
using namespace std;

float sum(){
	float a,b;
	a=10.3;
	b=20.5;
	
	return a+b;
}

int main(){
	
//	printf("A + B = %.2f\n",sum());
//	
	cout<<"A + B = "<<sum()<<endl;
	float total;
	
	total=sum();
	
	cout<<"A + B = "<<total;
	
	return 0;
}
