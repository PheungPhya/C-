#include<iostream>
using namespace std;

void sum(int x){
	cout<<x<<" + 5 = "<<x+5<<endl;
}

void sum(float y){
	cout<<y<<" + 10 = "<<y+10<<endl;
}

void sum(int x,int y){
	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
}

void sum(float x,float y){
	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
}


void sum(float x,int y){
	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
}

void sum(int x,float y){
	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
}

int main(){
	
	int a=10;
	int b=20;
	
	float a1=20.3;
	float b2=35.90;
	
	sum(a1,a);
	sum(a,a1);
	sum(b,b2);
	sum(a,b);
	
	return 0;
}




