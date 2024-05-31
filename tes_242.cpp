#include<iostream>
using namespace std;
template <typename T>

T sum(T x,T y){
	return x+y;
}

int main(){
	int a=10,a1=20;
	float b=20.3,b1=24.9;
	string c="Ha ",c1="he he";
	
	cout<<"sum = "<<sum(a,a1)<<endl;
	cout<<"sum = "<<sum(b,b1)<<endl;
	cout<<"sum = "<<sum(c,c1)<<endl;
	
	return 0;
}
