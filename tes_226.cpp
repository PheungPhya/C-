#include<iostream>
using namespace std;

class Add{
	public:
		void sum(int x){
	cout<<x<<" + 10 = "<<x+10<<endl;
}

void sum(float y){
	cout<<y<<" + 20 = "<<y+20<<endl;
}

void sum(int a1,int b1){
	cout<<"a1 + b1 = "<<a1+b1<<endl;
}

void sum(float a2,float b2){
	cout<<"a2 + b2 = "<<a2+b2<<endl;
}

void sum(float a3,int b3){
	cout<<"a3 + b3 = "<<a3+b3<<endl;
}

void sum(int a4,float b4){
	cout<<"a4 + b4 = "<<a4+b4<<endl;
}
};


int main(){
	Add a;
	float b=200,c=90.4;
	a.sum(b,c);
}
