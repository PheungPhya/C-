#include<iostream>
using namespace std;

void show(int n){
	int i;
	int b[100];
	for(i=0;i<n;i++){
		cout<<"Enter value : ";cin>>b[i];
	}
	for(i=0;i<n;i++){
		cout<< b[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter value n : ";
	cin>>n;	
	show(n);	
};


